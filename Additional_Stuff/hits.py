#!/usr/bin/python3
fo = open("All_output.txt", "r");
str = fo.readlines()
fo.close();

hitlist = []
cleanList = []
particleList = []
fileOut = []

for item in str:
    if item.startswith("  trackID: "):
        hitlist.append(item)

for hit in hitlist:
    info = hit.split(":")
    tID = info[1]
    tID = tID[0:len(tID)-10].strip()
    chNo = info[2]
    chNo = chNo[0:chNo.find("en", 0,  len(chNo))].strip()
    energy = info[3]
    energy = energy[0:energy.find("po", 0,  len(energy))].strip()
    position = info[4]
    position = position[position.find("(")+1:position.find(")")]
    position  = position.split(",")
    x = position[0].strip()
    y = position[1].strip()
    z = position[2].strip()
    entry = [tID,  chNo,  energy,  x,  y,  z]
    cleanList.append(entry)

for line in str:
    if line.startswith("Track ID:  "):
        trackID = line[len(line)-4:len(line)].strip()

    elif line.startswith("TParticle:"):
        listItems = line.split(":")
        
        particle = listItems[1]
        particle = particle[0:len(particle)-2].strip()

        momentum = listItems[2].split()
        Px = momentum[0]
        Py = momentum[1]
        Pz = momentum[2]
        
        Vertex = listItems[3].split()
        Vx = Vertex[0]
        Vy = Vertex[1]
        Vz = Vertex[2]
        
        Mother = Vertex[3].strip()
        
        entry2 = [trackID,  particle, Px,  Py,  Pz,  Vx,  Vy,  Vz,  Mother]
        particleList.append(entry2)

for thing1 in particleList:
    TID = thing1[0]
    TID2 = "Track: "+TID
    thing1[0]=TID2
    fileOut.append(thing1)
    for thing2 in cleanList:
        if thing2[0]==TID:
            fileOut.append(thing2)

outfile = open("AllInfo.csv",  "a")

outfile.write("TRACKNUMBER, PARTICLE_ID, Px, Py, Pz, Vx, Vy, Vz, Mother, chNo, energy, x, y, z \n")

for final in fileOut:
    if final[0].startswith("Track"):
        stringy = final[0]+", "+final[1]+", "+final[2]+", "+final[3]+", "+final[4]+", "+final[5]+", "+final[6]+", "+final[7]+", "+final[8]+", , , , , \n"
        outfile.write(stringy)
    else:
        stringy2 = final[0] + ", , , , , , , , ,"+ final[1]+", "+ final[2]+", "+ final[3]+", "+ final[4]+", "+ final[5]+"\n"
        outfile.write(stringy2)
outfile.close()
