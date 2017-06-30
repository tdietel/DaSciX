// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME libvmc_E02_dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Ex02MCApplication.h"
#include "Ex02MCStack.h"
#include "Ex02Particle.h"
#include "Ex02ChamberParameterisation.h"
#include "Ex02DetectorConstruction.h"
#include "Ex02DetectorConstructionOld.h"
#include "Ex02MagField.h"
#include "Ex02TrackerHit.h"
#include "Ex02TrackerSD.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Ex02DetectorConstruction(void *p = 0);
   static void *newArray_Ex02DetectorConstruction(Long_t size, void *p);
   static void delete_Ex02DetectorConstruction(void *p);
   static void deleteArray_Ex02DetectorConstruction(void *p);
   static void destruct_Ex02DetectorConstruction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02DetectorConstruction*)
   {
      ::Ex02DetectorConstruction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02DetectorConstruction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02DetectorConstruction", ::Ex02DetectorConstruction::Class_Version(), "Ex02DetectorConstruction.h", 31,
                  typeid(::Ex02DetectorConstruction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02DetectorConstruction::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02DetectorConstruction) );
      instance.SetNew(&new_Ex02DetectorConstruction);
      instance.SetNewArray(&newArray_Ex02DetectorConstruction);
      instance.SetDelete(&delete_Ex02DetectorConstruction);
      instance.SetDeleteArray(&deleteArray_Ex02DetectorConstruction);
      instance.SetDestructor(&destruct_Ex02DetectorConstruction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02DetectorConstruction*)
   {
      return GenerateInitInstanceLocal((::Ex02DetectorConstruction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02DetectorConstruction*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02TrackerSD(void *p = 0);
   static void *newArray_Ex02TrackerSD(Long_t size, void *p);
   static void delete_Ex02TrackerSD(void *p);
   static void deleteArray_Ex02TrackerSD(void *p);
   static void destruct_Ex02TrackerSD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02TrackerSD*)
   {
      ::Ex02TrackerSD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02TrackerSD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02TrackerSD", ::Ex02TrackerSD::Class_Version(), "Ex02TrackerSD.h", 33,
                  typeid(::Ex02TrackerSD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02TrackerSD::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02TrackerSD) );
      instance.SetNew(&new_Ex02TrackerSD);
      instance.SetNewArray(&newArray_Ex02TrackerSD);
      instance.SetDelete(&delete_Ex02TrackerSD);
      instance.SetDeleteArray(&deleteArray_Ex02TrackerSD);
      instance.SetDestructor(&destruct_Ex02TrackerSD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02TrackerSD*)
   {
      return GenerateInitInstanceLocal((::Ex02TrackerSD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02TrackerSD*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02MCApplication(void *p = 0);
   static void *newArray_Ex02MCApplication(Long_t size, void *p);
   static void delete_Ex02MCApplication(void *p);
   static void deleteArray_Ex02MCApplication(void *p);
   static void destruct_Ex02MCApplication(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02MCApplication*)
   {
      ::Ex02MCApplication *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02MCApplication >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02MCApplication", ::Ex02MCApplication::Class_Version(), "", 42,
                  typeid(::Ex02MCApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02MCApplication::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02MCApplication) );
      instance.SetNew(&new_Ex02MCApplication);
      instance.SetNewArray(&newArray_Ex02MCApplication);
      instance.SetDelete(&delete_Ex02MCApplication);
      instance.SetDeleteArray(&deleteArray_Ex02MCApplication);
      instance.SetDestructor(&destruct_Ex02MCApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02MCApplication*)
   {
      return GenerateInitInstanceLocal((::Ex02MCApplication*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02MCApplication*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02Particle(void *p = 0);
   static void *newArray_Ex02Particle(Long_t size, void *p);
   static void delete_Ex02Particle(void *p);
   static void deleteArray_Ex02Particle(void *p);
   static void destruct_Ex02Particle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02Particle*)
   {
      ::Ex02Particle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02Particle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02Particle", ::Ex02Particle::Class_Version(), "Ex02Particle.h", 33,
                  typeid(::Ex02Particle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02Particle::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02Particle) );
      instance.SetNew(&new_Ex02Particle);
      instance.SetNewArray(&newArray_Ex02Particle);
      instance.SetDelete(&delete_Ex02Particle);
      instance.SetDeleteArray(&deleteArray_Ex02Particle);
      instance.SetDestructor(&destruct_Ex02Particle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02Particle*)
   {
      return GenerateInitInstanceLocal((::Ex02Particle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02Particle*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR_Dictionary();
   static void stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR_TClassManip(TClass*);
   static void *new_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p = 0);
   static void *newArray_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(Long_t size, void *p);
   static void delete_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p);
   static void deleteArray_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p);
   static void destruct_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stack<Ex02Particle*,deque<Ex02Particle*> >*)
   {
      ::stack<Ex02Particle*,deque<Ex02Particle*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::stack<Ex02Particle*,deque<Ex02Particle*> >));
      static ::ROOT::TGenericClassInfo 
         instance("stack<Ex02Particle*,deque<Ex02Particle*> >", "stack", 99,
                  typeid(::stack<Ex02Particle*,deque<Ex02Particle*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::stack<Ex02Particle*,deque<Ex02Particle*> >) );
      instance.SetNew(&new_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR);
      instance.SetNewArray(&newArray_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR);
      instance.SetDelete(&delete_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR);
      instance.SetDeleteArray(&deleteArray_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR);
      instance.SetDestructor(&destruct_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR);

      ::ROOT::AddClassAlternate("stack<Ex02Particle*,deque<Ex02Particle*> >","stack<Ex02Particle*>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::stack<Ex02Particle*,deque<Ex02Particle*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::stack<Ex02Particle*,deque<Ex02Particle*> >*)0x0)->GetClass();
      stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02MCStack(void *p = 0);
   static void *newArray_Ex02MCStack(Long_t size, void *p);
   static void delete_Ex02MCStack(void *p);
   static void deleteArray_Ex02MCStack(void *p);
   static void destruct_Ex02MCStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02MCStack*)
   {
      ::Ex02MCStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02MCStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02MCStack", ::Ex02MCStack::Class_Version(), "", 131,
                  typeid(::Ex02MCStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02MCStack::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02MCStack) );
      instance.SetNew(&new_Ex02MCStack);
      instance.SetNewArray(&newArray_Ex02MCStack);
      instance.SetDelete(&delete_Ex02MCStack);
      instance.SetDeleteArray(&deleteArray_Ex02MCStack);
      instance.SetDestructor(&destruct_Ex02MCStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02MCStack*)
   {
      return GenerateInitInstanceLocal((::Ex02MCStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02MCStack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Ex02ChamberParameterisation(void *p);
   static void deleteArray_Ex02ChamberParameterisation(void *p);
   static void destruct_Ex02ChamberParameterisation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02ChamberParameterisation*)
   {
      ::Ex02ChamberParameterisation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02ChamberParameterisation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02ChamberParameterisation", ::Ex02ChamberParameterisation::Class_Version(), "", 277,
                  typeid(::Ex02ChamberParameterisation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02ChamberParameterisation::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02ChamberParameterisation) );
      instance.SetDelete(&delete_Ex02ChamberParameterisation);
      instance.SetDeleteArray(&deleteArray_Ex02ChamberParameterisation);
      instance.SetDestructor(&destruct_Ex02ChamberParameterisation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02ChamberParameterisation*)
   {
      return GenerateInitInstanceLocal((::Ex02ChamberParameterisation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02ChamberParameterisation*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02DetectorConstructionOld(void *p = 0);
   static void *newArray_Ex02DetectorConstructionOld(Long_t size, void *p);
   static void delete_Ex02DetectorConstructionOld(void *p);
   static void deleteArray_Ex02DetectorConstructionOld(void *p);
   static void destruct_Ex02DetectorConstructionOld(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02DetectorConstructionOld*)
   {
      ::Ex02DetectorConstructionOld *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02DetectorConstructionOld >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02DetectorConstructionOld", ::Ex02DetectorConstructionOld::Class_Version(), "", 398,
                  typeid(::Ex02DetectorConstructionOld), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02DetectorConstructionOld::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02DetectorConstructionOld) );
      instance.SetNew(&new_Ex02DetectorConstructionOld);
      instance.SetNewArray(&newArray_Ex02DetectorConstructionOld);
      instance.SetDelete(&delete_Ex02DetectorConstructionOld);
      instance.SetDeleteArray(&deleteArray_Ex02DetectorConstructionOld);
      instance.SetDestructor(&destruct_Ex02DetectorConstructionOld);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02DetectorConstructionOld*)
   {
      return GenerateInitInstanceLocal((::Ex02DetectorConstructionOld*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02DetectorConstructionOld*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02MagField(void *p = 0);
   static void *newArray_Ex02MagField(Long_t size, void *p);
   static void delete_Ex02MagField(void *p);
   static void deleteArray_Ex02MagField(void *p);
   static void destruct_Ex02MagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02MagField*)
   {
      ::Ex02MagField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02MagField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02MagField", ::Ex02MagField::Class_Version(), "", 466,
                  typeid(::Ex02MagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02MagField::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02MagField) );
      instance.SetNew(&new_Ex02MagField);
      instance.SetNewArray(&newArray_Ex02MagField);
      instance.SetDelete(&delete_Ex02MagField);
      instance.SetDeleteArray(&deleteArray_Ex02MagField);
      instance.SetDestructor(&destruct_Ex02MagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02MagField*)
   {
      return GenerateInitInstanceLocal((::Ex02MagField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02MagField*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Ex02TrackerHit(void *p = 0);
   static void *newArray_Ex02TrackerHit(Long_t size, void *p);
   static void delete_Ex02TrackerHit(void *p);
   static void deleteArray_Ex02TrackerHit(void *p);
   static void destruct_Ex02TrackerHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Ex02TrackerHit*)
   {
      ::Ex02TrackerHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Ex02TrackerHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Ex02TrackerHit", ::Ex02TrackerHit::Class_Version(), "", 516,
                  typeid(::Ex02TrackerHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Ex02TrackerHit::Dictionary, isa_proxy, 4,
                  sizeof(::Ex02TrackerHit) );
      instance.SetNew(&new_Ex02TrackerHit);
      instance.SetNewArray(&newArray_Ex02TrackerHit);
      instance.SetDelete(&delete_Ex02TrackerHit);
      instance.SetDeleteArray(&deleteArray_Ex02TrackerHit);
      instance.SetDestructor(&destruct_Ex02TrackerHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Ex02TrackerHit*)
   {
      return GenerateInitInstanceLocal((::Ex02TrackerHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Ex02TrackerHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Ex02DetectorConstruction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02DetectorConstruction::Class_Name()
{
   return "Ex02DetectorConstruction";
}

//______________________________________________________________________________
const char *Ex02DetectorConstruction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstruction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02DetectorConstruction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstruction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02DetectorConstruction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstruction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02DetectorConstruction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstruction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02TrackerSD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02TrackerSD::Class_Name()
{
   return "Ex02TrackerSD";
}

//______________________________________________________________________________
const char *Ex02TrackerSD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerSD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02TrackerSD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerSD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02TrackerSD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerSD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02TrackerSD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerSD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02MCApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02MCApplication::Class_Name()
{
   return "Ex02MCApplication";
}

//______________________________________________________________________________
const char *Ex02MCApplication::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02MCApplication::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02MCApplication::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02MCApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCApplication*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02Particle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02Particle::Class_Name()
{
   return "Ex02Particle";
}

//______________________________________________________________________________
const char *Ex02Particle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02Particle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02Particle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02Particle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02Particle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02Particle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02Particle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02Particle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02MCStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02MCStack::Class_Name()
{
   return "Ex02MCStack";
}

//______________________________________________________________________________
const char *Ex02MCStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02MCStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02MCStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02MCStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02MCStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02ChamberParameterisation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02ChamberParameterisation::Class_Name()
{
   return "Ex02ChamberParameterisation";
}

//______________________________________________________________________________
const char *Ex02ChamberParameterisation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02ChamberParameterisation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02ChamberParameterisation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02ChamberParameterisation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02ChamberParameterisation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02ChamberParameterisation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02ChamberParameterisation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02ChamberParameterisation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02DetectorConstructionOld::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02DetectorConstructionOld::Class_Name()
{
   return "Ex02DetectorConstructionOld";
}

//______________________________________________________________________________
const char *Ex02DetectorConstructionOld::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstructionOld*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02DetectorConstructionOld::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstructionOld*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02DetectorConstructionOld::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstructionOld*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02DetectorConstructionOld::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02DetectorConstructionOld*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02MagField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02MagField::Class_Name()
{
   return "Ex02MagField";
}

//______________________________________________________________________________
const char *Ex02MagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02MagField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02MagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02MagField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02MagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02MagField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02MagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02MagField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Ex02TrackerHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Ex02TrackerHit::Class_Name()
{
   return "Ex02TrackerHit";
}

//______________________________________________________________________________
const char *Ex02TrackerHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Ex02TrackerHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ex02TrackerHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ex02TrackerHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Ex02TrackerHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Ex02DetectorConstruction::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02DetectorConstruction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02DetectorConstruction::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02DetectorConstruction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02DetectorConstruction(void *p) {
      return  p ? new(p) ::Ex02DetectorConstruction : new ::Ex02DetectorConstruction;
   }
   static void *newArray_Ex02DetectorConstruction(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02DetectorConstruction[nElements] : new ::Ex02DetectorConstruction[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02DetectorConstruction(void *p) {
      delete ((::Ex02DetectorConstruction*)p);
   }
   static void deleteArray_Ex02DetectorConstruction(void *p) {
      delete [] ((::Ex02DetectorConstruction*)p);
   }
   static void destruct_Ex02DetectorConstruction(void *p) {
      typedef ::Ex02DetectorConstruction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02DetectorConstruction

//______________________________________________________________________________
void Ex02TrackerSD::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02TrackerSD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02TrackerSD::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02TrackerSD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02TrackerSD(void *p) {
      return  p ? new(p) ::Ex02TrackerSD : new ::Ex02TrackerSD;
   }
   static void *newArray_Ex02TrackerSD(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02TrackerSD[nElements] : new ::Ex02TrackerSD[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02TrackerSD(void *p) {
      delete ((::Ex02TrackerSD*)p);
   }
   static void deleteArray_Ex02TrackerSD(void *p) {
      delete [] ((::Ex02TrackerSD*)p);
   }
   static void destruct_Ex02TrackerSD(void *p) {
      typedef ::Ex02TrackerSD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02TrackerSD

//______________________________________________________________________________
void Ex02MCApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02MCApplication.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02MCApplication::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02MCApplication::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02MCApplication(void *p) {
      return  p ? new(p) ::Ex02MCApplication : new ::Ex02MCApplication;
   }
   static void *newArray_Ex02MCApplication(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02MCApplication[nElements] : new ::Ex02MCApplication[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02MCApplication(void *p) {
      delete ((::Ex02MCApplication*)p);
   }
   static void deleteArray_Ex02MCApplication(void *p) {
      delete [] ((::Ex02MCApplication*)p);
   }
   static void destruct_Ex02MCApplication(void *p) {
      typedef ::Ex02MCApplication current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02MCApplication

//______________________________________________________________________________
void Ex02Particle::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02Particle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02Particle::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02Particle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02Particle(void *p) {
      return  p ? new(p) ::Ex02Particle : new ::Ex02Particle;
   }
   static void *newArray_Ex02Particle(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02Particle[nElements] : new ::Ex02Particle[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02Particle(void *p) {
      delete ((::Ex02Particle*)p);
   }
   static void deleteArray_Ex02Particle(void *p) {
      delete [] ((::Ex02Particle*)p);
   }
   static void destruct_Ex02Particle(void *p) {
      typedef ::Ex02Particle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02Particle

namespace ROOT {
   // Wrappers around operator new
   static void *new_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::stack<Ex02Particle*,deque<Ex02Particle*> > : new ::stack<Ex02Particle*,deque<Ex02Particle*> >;
   }
   static void *newArray_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::stack<Ex02Particle*,deque<Ex02Particle*> >[nElements] : new ::stack<Ex02Particle*,deque<Ex02Particle*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p) {
      delete ((::stack<Ex02Particle*,deque<Ex02Particle*> >*)p);
   }
   static void deleteArray_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p) {
      delete [] ((::stack<Ex02Particle*,deque<Ex02Particle*> >*)p);
   }
   static void destruct_stacklEEx02ParticlemUcOdequelEEx02ParticlemUgRsPgR(void *p) {
      typedef ::stack<Ex02Particle*,deque<Ex02Particle*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::stack<Ex02Particle*,deque<Ex02Particle*> >

//______________________________________________________________________________
void Ex02MCStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02MCStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02MCStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02MCStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02MCStack(void *p) {
      return  p ? new(p) ::Ex02MCStack : new ::Ex02MCStack;
   }
   static void *newArray_Ex02MCStack(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02MCStack[nElements] : new ::Ex02MCStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02MCStack(void *p) {
      delete ((::Ex02MCStack*)p);
   }
   static void deleteArray_Ex02MCStack(void *p) {
      delete [] ((::Ex02MCStack*)p);
   }
   static void destruct_Ex02MCStack(void *p) {
      typedef ::Ex02MCStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02MCStack

//______________________________________________________________________________
void Ex02ChamberParameterisation::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02ChamberParameterisation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02ChamberParameterisation::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02ChamberParameterisation::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Ex02ChamberParameterisation(void *p) {
      delete ((::Ex02ChamberParameterisation*)p);
   }
   static void deleteArray_Ex02ChamberParameterisation(void *p) {
      delete [] ((::Ex02ChamberParameterisation*)p);
   }
   static void destruct_Ex02ChamberParameterisation(void *p) {
      typedef ::Ex02ChamberParameterisation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02ChamberParameterisation

//______________________________________________________________________________
void Ex02DetectorConstructionOld::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02DetectorConstructionOld.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02DetectorConstructionOld::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02DetectorConstructionOld::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02DetectorConstructionOld(void *p) {
      return  p ? new(p) ::Ex02DetectorConstructionOld : new ::Ex02DetectorConstructionOld;
   }
   static void *newArray_Ex02DetectorConstructionOld(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02DetectorConstructionOld[nElements] : new ::Ex02DetectorConstructionOld[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02DetectorConstructionOld(void *p) {
      delete ((::Ex02DetectorConstructionOld*)p);
   }
   static void deleteArray_Ex02DetectorConstructionOld(void *p) {
      delete [] ((::Ex02DetectorConstructionOld*)p);
   }
   static void destruct_Ex02DetectorConstructionOld(void *p) {
      typedef ::Ex02DetectorConstructionOld current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02DetectorConstructionOld

//______________________________________________________________________________
void Ex02MagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02MagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02MagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02MagField::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02MagField(void *p) {
      return  p ? new(p) ::Ex02MagField : new ::Ex02MagField;
   }
   static void *newArray_Ex02MagField(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02MagField[nElements] : new ::Ex02MagField[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02MagField(void *p) {
      delete ((::Ex02MagField*)p);
   }
   static void deleteArray_Ex02MagField(void *p) {
      delete [] ((::Ex02MagField*)p);
   }
   static void destruct_Ex02MagField(void *p) {
      typedef ::Ex02MagField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02MagField

//______________________________________________________________________________
void Ex02TrackerHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class Ex02TrackerHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Ex02TrackerHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(Ex02TrackerHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Ex02TrackerHit(void *p) {
      return  p ? new(p) ::Ex02TrackerHit : new ::Ex02TrackerHit;
   }
   static void *newArray_Ex02TrackerHit(Long_t nElements, void *p) {
      return p ? new(p) ::Ex02TrackerHit[nElements] : new ::Ex02TrackerHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_Ex02TrackerHit(void *p) {
      delete ((::Ex02TrackerHit*)p);
   }
   static void deleteArray_Ex02TrackerHit(void *p) {
      delete [] ((::Ex02TrackerHit*)p);
   }
   static void destruct_Ex02TrackerHit(void *p) {
      typedef ::Ex02TrackerHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Ex02TrackerHit

namespace ROOT {
   static TClass *dequelEEx02ParticlemUgR_Dictionary();
   static void dequelEEx02ParticlemUgR_TClassManip(TClass*);
   static void *new_dequelEEx02ParticlemUgR(void *p = 0);
   static void *newArray_dequelEEx02ParticlemUgR(Long_t size, void *p);
   static void delete_dequelEEx02ParticlemUgR(void *p);
   static void deleteArray_dequelEEx02ParticlemUgR(void *p);
   static void destruct_dequelEEx02ParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<Ex02Particle*>*)
   {
      deque<Ex02Particle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<Ex02Particle*>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<Ex02Particle*>", -2, "deque", 830,
                  typeid(deque<Ex02Particle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEEx02ParticlemUgR_Dictionary, isa_proxy, 0,
                  sizeof(deque<Ex02Particle*>) );
      instance.SetNew(&new_dequelEEx02ParticlemUgR);
      instance.SetNewArray(&newArray_dequelEEx02ParticlemUgR);
      instance.SetDelete(&delete_dequelEEx02ParticlemUgR);
      instance.SetDeleteArray(&deleteArray_dequelEEx02ParticlemUgR);
      instance.SetDestructor(&destruct_dequelEEx02ParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<Ex02Particle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const deque<Ex02Particle*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEEx02ParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<Ex02Particle*>*)0x0)->GetClass();
      dequelEEx02ParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEEx02ParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEEx02ParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<Ex02Particle*> : new deque<Ex02Particle*>;
   }
   static void *newArray_dequelEEx02ParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<Ex02Particle*>[nElements] : new deque<Ex02Particle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEEx02ParticlemUgR(void *p) {
      delete ((deque<Ex02Particle*>*)p);
   }
   static void deleteArray_dequelEEx02ParticlemUgR(void *p) {
      delete [] ((deque<Ex02Particle*>*)p);
   }
   static void destruct_dequelEEx02ParticlemUgR(void *p) {
      typedef deque<Ex02Particle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<Ex02Particle*>

namespace {
  void TriggerDictionaryInitialization_libvmc_E02_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/home/chris/DaSciX/Detector/src/include",
"/home/chris/root/include",
"/home/chris/Geant4/VMC-install/include/mtroot",
"/home/chris/DaSciX/Detector/src/include",
"/home/chris/DaSciX/Detector/build",
"/home/chris/root/include",
"/home/chris/DaSciX/Detector/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libvmc_E02_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Ex02DetectorConstruction)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Ex02DetectorConstruction.h")))  Ex02DetectorConstruction;
class __attribute__((annotate(R"ATTRDUMP(Ex02TrackerSD)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Ex02TrackerSD.h")))  Ex02TrackerSD;
class __attribute__((annotate(R"ATTRDUMP(Interface to MonteCarlo application)ATTRDUMP"))) Ex02MCApplication;
class __attribute__((annotate(R"ATTRDUMP(Extended TParticle)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Ex02Particle.h")))  Ex02Particle;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate(R"ATTRDUMP(Ex02MCStack)ATTRDUMP"))) Ex02MCStack;
class __attribute__((annotate(R"ATTRDUMP(Ex02ChamberParameterisation)ATTRDUMP"))) Ex02ChamberParameterisation;
class __attribute__((annotate(R"ATTRDUMP(Ex02DetectorConstructionOld)ATTRDUMP"))) Ex02DetectorConstructionOld;
class __attribute__((annotate(R"ATTRDUMP(Uniform magnetic field)ATTRDUMP"))) Ex02MagField;
class __attribute__((annotate(R"ATTRDUMP(Ex02TrackerHit)ATTRDUMP"))) Ex02TrackerHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libvmc_E02_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef EX02_MC_APPLICATION_H
#define EX02_MC_APPLICATION_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02MCApplication.h
/// \brief Definition of the Ex02MCApplication class 
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TVirtualMCApplication.h>

#include "Ex02DetectorConstruction.h"
#include "Ex02TrackerSD.h"

#include <TVirtualMCRootManager.h>

class Ex02MCStack;

class TVirtualMagField;

/// \ingroup E02
/// \brief Implementation of the TVirtualMCApplication
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02MCApplication : public TVirtualMCApplication
{
  public:
    Ex02MCApplication(const char* name,  const char *title);
    Ex02MCApplication();
    virtual ~Ex02MCApplication();

    // methods
    void InitMC(const char *setup);
    void RunMC(Int_t nofEvents);
    void FinishRun();
 
    virtual TVirtualMCApplication* CloneForWorker() const; 
    virtual void InitForWorker() const; 
    virtual void FinishWorkerRun() const;

    virtual void ConstructGeometry();
    virtual void InitGeometry();
    virtual void GeneratePrimaries();
    virtual void BeginEvent();
    virtual void BeginPrimary();
    virtual void PreTrack();
    virtual void Stepping();
    virtual void PostTrack();
    virtual void FinishPrimary();
    virtual void FinishEvent();
    
    void   ReadEvent(Int_t i);

    // method for tests
    void SetOldGeometry(Bool_t oldGeometry = kTRUE);

  private:
    // methods
    Ex02MCApplication(const Ex02MCApplication& origin);
    void RegisterStack() const;
    
    // data members
    mutable TVirtualMCRootManager*   fRootManager;     //!< Root manager 
    Ex02MCStack*             fStack;           ///< VMC stack
    Ex02DetectorConstruction fDetConstruction; ///< Dector construction
    Ex02TrackerSD*           fTrackerSD;       ///< Tracker SD
    TVirtualMagField*        fMagField;        ///< Magnetic field
    Bool_t                   fOldGeometry;     ///< Option for geometry definition

  ClassDef(Ex02MCApplication,1)  //Interface to MonteCarlo application
};

// inline functions

/// Switch on/off the old geometry definition  (via VMC functions)
/// \param oldGeometry  If true, geometry definition via VMC functions
inline void Ex02MCApplication::SetOldGeometry(Bool_t oldGeometry)
{ fOldGeometry = oldGeometry; }

#endif //EX02_MC_APPLICATION_H

#ifndef EX02_STACK_H
#define EX02_STACK_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file  Ex02MCStack.h
/// \brief Definition of the Ex02MCStack class 
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo
///
/// \author I. Hrivnacova; IPN, Orsay

#include "Ex02Particle.h"

#include <TVirtualMCStack.h>

#include <stack>

/// \ingroup E02
/// \brief Implementation of the TVirtualMCStack interface
///
/// \date 05/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02MCStack : public TVirtualMCStack
{
  public:
    Ex02MCStack(Int_t size);
    Ex02MCStack();
    virtual ~Ex02MCStack();     

    // methods
    virtual void  PushTrack(Int_t toBeDone, Int_t parent, Int_t pdg,
  	              Double_t px, Double_t py, Double_t pz, Double_t e,
  		      Double_t vx, Double_t vy, Double_t vz, Double_t tof,
		      Double_t polx, Double_t poly, Double_t polz,
		      TMCProcess mech, Int_t& ntr, Double_t weight,
		      Int_t is) ;
    virtual TParticle* PopNextTrack(Int_t& track);
    virtual TParticle* PopPrimaryForTracking(Int_t i); 
    virtual void Print(Option_t* option = "") const; 
    void Reset();   
   
    // set methods
    virtual void  SetCurrentTrack(Int_t track);                           
            void  SetObjectNumber();                           

    // get methods
    virtual Int_t  GetNtrack() const;
    virtual Int_t  GetNprimary() const;
    virtual TParticle* GetCurrentTrack() const;    
    virtual Int_t  GetCurrentTrackNumber() const;
    virtual Int_t  GetCurrentParentTrackNumber() const;
    Ex02Particle*  GetParticle(Int_t id) const;
    
  private:
    // data members
    std::stack<Ex02Particle*>  fStack;        //!< The stack of particles (transient)
    TObjArray*                 fParticles;    ///< The array of particle (persistent)
    Int_t                      fCurrentTrack; ///< The current track number
    Int_t                      fNPrimary;     ///< The number of primaries
    Int_t                      fObjectNumber; ///< The Root object number counter
    
    ClassDef(Ex02MCStack,1) // Ex02MCStack
};

#endif //EX02_STACK_H   
   

#ifndef EX02_PARTICLE_H
#define EX02_PARTICLE_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file  Ex02Particle.h
/// \brief Definition of the Ex02Particle class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TObject.h>
#include <TRef.h>
#include <TRefArray.h>

class TParticle;

/// \ingroup E02
/// \brief Extended TParticle with pointers to mother and daughter
/// particles
///
/// \date 05/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02Particle : public TObject
{
  public:
    Ex02Particle(Int_t id, TParticle* particle);
    Ex02Particle(Int_t id, TParticle* particle, Ex02Particle* mother);
    Ex02Particle();
    virtual ~Ex02Particle();     

    // methods
    void SetMother(Ex02Particle* particle);
    void AddDaughter(Ex02Particle* particle);
    virtual void Print(Option_t* option = "") const;
    void PrintDaughters() const;

    // get methods  
    Int_t         GetID() const;
    TParticle*    GetParticle() const;
    Ex02Particle* GetMother() const;
    Int_t         GetNofDaughters() const;
    Ex02Particle* GetDaughter(Int_t i) const;
    
  private:
    // data members
    Int_t       fID;        ///< The particle Id
    TParticle*  fParticle;  ///< The particle definition
    TRef        fMother;    ///< The particle mother 
    TRefArray   fDaughters; ///< The particle daughters
    
    ClassDef(Ex02Particle,1) // Extended TParticle
};

#endif //EX02_PARTICLE_H   
   

#ifndef Ex02ChamberParameterisation_H
#define Ex02ChamberParameterisation_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02ChamberParameterisation.h
/// \brief Definition of the Ex02ChamberParameterisation class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: Ex02ChamberParameterisation.hh,v 1.6 2002/01/09 17:24:08 ranjard Exp \n
/// GEANT4 tag Name: geant4-04-00-patch-02
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TObject.h>

/// \ingroup E02
/// \brief The chamber parameterisation
///
/// A parameterisation that describes a series of boxes along Z
/// The boxes have equal width, & their lengths are a linear equation.
//  They are spaced an equal distance apart, starting from given location.
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02ChamberParameterisation : public TObject
{
  public:
    Ex02ChamberParameterisation(Int_t    noChambers,
                                Double_t radialSpacing,
                                Double_t layerThickness,
                                Double_t beampipeRadius,
                                Double_t length );

    virtual ~Ex02ChamberParameterisation();

    // methods
    void ComputeDimensions (Int_t copyNo, Double_t* dimension) const;


  private:
    Int_t     fNoChambers;      ///< Number of chambers
    Double_t  fHalfLength;      ///< The half-length of each tracker chamber
    Double_t  fSpacing;         ///< The distance between the chambers
    Double_t  fBeamPipe;        ///< The beam pipe radius
    Double_t  fThickness;       ///< The tracker detector thickness

  ClassDef(Ex02ChamberParameterisation,1) //Ex02ChamberParameterisation
};

#endif
#ifndef EX02_DETECTOR_CONSTRUCTION_H
#define EX02_DETECTOR_CONSTRUCTION_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02DetectorConstruction.h
/// \brief Definition of the Ex02DetectorConstruction class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: ExN02DetectorConstruction.hh,v 1.7 2002/01/09 17:24:09 ranjard Exp \n
/// GEANT4 tag Name: geant4-04-00-patch-02
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TObject.h>
#include <TString.h>

/// \ingroup E02
/// \brief The detector construction (via TGeo )
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02DetectorConstruction : public TObject
{
  public:
    Ex02DetectorConstruction();
    virtual ~Ex02DetectorConstruction();

  public:
     void ConstructMaterials();
     void ConstructGeometry();

     // set methods
     void SetTargetMaterial (const TString& name);
     void SetChamberMaterial(const TString& name);

              /// \return The tracker full length
     Double_t GetTrackerFullLength() {return fTrackerLength;};
              /// \return The world full length
     Double_t GetWorldFullLength()   {return fWorldLength;};

  private:
     Double_t  fWorldLength;   ///< Full length of the world volume
     Double_t  fTrackerLength; ///< Full length of Tracker
     Int_t     fNofChambers;   ///< Nb of chambers in the tracker region
     Double_t  fThickness;  ///< Width of the chambers
     Double_t  fChamberSpacing;///< Distance between chambers
     Double_t  fBeamPipe;      //< Radius of beam pipe
     Int_t     fImedAir;       ///< The Air medium Id
     Int_t     fImedSi;        ///< The Silicon detector medium Id

  ClassDef(Ex02DetectorConstruction,1) //Ex02DetectorConstruction
};

#endif //EX02_DETECTOR_CONSTRUCTION_H
#ifndef EX02_DETECTOR_CONSTRUCTION_OLD_H
#define EX02_DETECTOR_CONSTRUCTION_OLD_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02DetectorConstructionOld.h
/// \brief Definition of the Ex02DetectorConstructionOld class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: ExN02DetectorConstruction.hh,v 1.7 2002/01/09 17:24:09 ranjard Exp  \n
/// GEANT4 tag Name: geant4-04-00-patch-02
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TObject.h>
#include <TString.h>

/// \ingroup E02
/// \brief The old detector construction (via VMC functions)
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02DetectorConstructionOld : public TObject
{
  public:
    Ex02DetectorConstructionOld();
    virtual ~Ex02DetectorConstructionOld();

  public:
     void ConstructMaterials();
     void ConstructGeometry();

     // set methods
     void SetTargetMaterial (const TString& name);
     void SetChamberMaterial(const TString& name);

              /// \return The tracker full length
     Double_t GetTrackerFullLength() {return fTrackerLength;};
              /// \return The world full length
     Double_t GetWorldFullLength()   {return fWorldLength;};

  private:
     Double_t  fWorldLength;   ///< Full length of the world volume
     Double_t  fTargetLength;  ///< Full length of Target
     Double_t  fTrackerLength; ///< Full length of Tracker
     Int_t     fNofChambers;   ///< Nb of chambers in the tracker region
     Double_t  fThickness;  ///< Width of the chambers
     Double_t  fChamberSpacing;///< Distance between chambers
     Double_t  fBeamPipe;      //< Radius of beam pipe
     Int_t     fImedAir;       ///< The Air medium Id
     Int_t     fImedSi;        ///< The Silicon detector medium Id

  ClassDef(Ex02DetectorConstructionOld,1) //Ex02DetectorConstructionOld
};

#endif //EX02_DETECTOR_CONSTRUCTION_OLD_H
#ifndef EX02_MAG_FIELD_H
#define EX02_MAG_FIELD_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file  Ex02MagField.h
/// \brief Definition of the Ex02MagField class 
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo
///
/// \date 18/09/2009
/// \author I. Hrivnacova; IPN, Orsay

#include <TVirtualMagField.h>

/// \ingroup E02
/// \brief Definition of a uniform magnetic field
///
/// This class demonstrates definition of a user magnetic field
/// via the TVirtualMagField interface.
/// In case of a uniform magnetic field, it is also possible to use
/// directly the TGeoUniformMagField class in the VMC application.
///
/// \date 
/// \author I. Hrivnacova; IPN, Orsay

class Ex02MagField : public TVirtualMagField
{
public:
   Ex02MagField(Double_t Bx, Double_t By, Double_t Bz); 
   Ex02MagField();
   virtual ~Ex02MagField();
   
   virtual void Field(const Double_t* x, Double_t* B);
   
private:
   Ex02MagField(const Ex02MagField&);
   Ex02MagField& operator=(const Ex02MagField&);
   
   Double_t  fB[3]; ///< Magnetic field vector

   ClassDef(Ex02MagField, 1)  // Uniform magnetic field        
};

#endif //EX02_MAG_FIELD_H
#ifndef EX02_TRACKER_HIT_H
#define EX02_TRACKER_HIT_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02TrackerHit.h
/// \brief Definition of the Ex02TrackerHit class 
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: Ex02TrackerHit.hh,v 1.6 2002/01/09 17:24:09 ranjard Exp  \n
/// GEANT4 tag Name: geant4-04-00-patch-02 
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TObject.h>
#include <TVector3.h>

/// \ingroup E02
/// \brief The tracker hit
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02TrackerHit : public TObject
{
  public:
    Ex02TrackerHit();
    virtual ~Ex02TrackerHit();

    // methods
    //void Draw();
    virtual void Print(const Option_t* option = "") const;

    //
    // set methods
    
    /// Set track Id
    /// \param track The new track Id value
    void SetTrackID  (Int_t track)  { fTrackID = track; };
    
    /// Set chamber number
    /// \param chamb The new chamber number value
    void SetChamberNb(Int_t chamb)  { fChamberNb = chamb; };  

    /// Set energy deposit
    /// \param de The new energy deposit value
    void SetEdep     (Double_t de)  { fEdep = de; };
    
    /// Set position
    /// \param xyz The new position value
    void SetPos      (TVector3 xyz) { fPos = xyz; };
      
    //
    // get methods
    
    /// \return The track Id
    Int_t GetTrackID()   { return fTrackID; };

    /// \return The chamber number
    Int_t GetChamberNb() { return fChamberNb; };

    /// \return The energy deposit
    Double_t GetEdep()   { return fEdep; };      

    /// \return The track position
    TVector3 GetPos()    { return fPos; };
      
  private:
    Int_t      fTrackID;   ///< Track Id
    Int_t      fChamberNb; ///< Chamber number
    Double_t   fEdep;      ///< Energy deposit
    TVector3   fPos;       ///< Track position
    
  ClassDef(Ex02TrackerHit,1) //Ex02TrackerHit  
};

#endif //EX02_TRACKER_HIT_H


#ifndef EX02_TRACKER_SD_H
#define EX02_TRACKER_SD_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02TrackerSD.h
/// \brief Definition of the Ex02TrackerSD class 
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: ExN02TrackerSD.hh,v 1.6 2002/01/09 17:24:09 ranjard Exp  \n
/// GEANT4 tag Name: geant4-04-00-patch-02 
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TNamed.h>
#include <TClonesArray.h>

class Ex02TrackerHit;

/// \ingroup E02
/// \brief The tracker sensitive detector
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02TrackerSD : public TNamed
{
  public:
    Ex02TrackerSD(const char* name);
    Ex02TrackerSD(const Ex02TrackerSD& origin);
    Ex02TrackerSD();
    virtual ~Ex02TrackerSD();

    // methods
    void   Initialize();
    Bool_t  ProcessHits();
    void   EndOfEvent();
    void   Register();
    virtual void  Print(const Option_t* option = 0) const;
    
    // set methods
    void SetVerboseLevel(Int_t level);

  private:
    // methods
    Ex02TrackerHit* AddHit();
  
    // data members
    TClonesArray*  fTrackerCollection; ///< Hits collection    
    Int_t          fSensitiveVolumeID; ///< Sensitive volume Id
    Int_t          fVerboseLevel;      ///< Verbosity level
   
  ClassDef(Ex02TrackerSD,1) //Ex02TrackerSD 

};

/// Set verbose level
/// \param level The new verbose level value
inline void Ex02TrackerSD::SetVerboseLevel(Int_t level) 
{ fVerboseLevel = level; }


#endif //EX02_TRACKER_SD_H


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Ex02ChamberParameterisation", payloadCode, "@",
"Ex02DetectorConstruction", payloadCode, "@",
"Ex02DetectorConstructionOld", payloadCode, "@",
"Ex02MCApplication", payloadCode, "@",
"Ex02MCStack", payloadCode, "@",
"Ex02MagField", payloadCode, "@",
"Ex02Particle", payloadCode, "@",
"Ex02TrackerHit", payloadCode, "@",
"Ex02TrackerSD", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libvmc_E02_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libvmc_E02_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libvmc_E02_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libvmc_E02_dict() {
  TriggerDictionaryInitialization_libvmc_E02_dict_Impl();
}
