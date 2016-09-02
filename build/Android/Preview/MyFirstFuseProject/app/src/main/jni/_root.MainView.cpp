// This file was generated based on C:\Users\Eddz-\Documents\Fuse\MyFirstFuseProject\build\Android\Preview\cache\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MyFirstFuseProject_bundle.h>
#include <_root.MyFirstFuseProject_FuseControlsRectangle_Color_Property.h>
#include <_root.MyFirstFuseProject_FuseControlsRectangle_CornerRadius_Property.h>
#include <_root.MyFirstFuseProject_FuseEffectsBlur_Radius_Property.h>
#include <_root.MyFirstFuseProject_FuseReactiveEach_Items_Property.h>
#include <_root.PageWithTitle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layouts.ColumnLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[16];
static uType* TYPES[23];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :58
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"myRectangle"*/], ::STRINGS[1/*"myBlur"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"CornerRadius"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Items"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Radius"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"myRectangle"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("myRectangle");
    ::STRINGS[1] = uString::Const("myBlur");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("CornerRadius");
    ::STRINGS[4] = uString::Const("Items");
    ::STRINGS[5] = uString::Const("Radius");
    ::STRINGS[6] = uString::Const("items");
    ::STRINGS[7] = uString::Const("addItem");
    ::STRINGS[8] = uString::Const("Basic animation");
    ::STRINGS[9] = uString::Const("Tap and hold the rectangle");
    ::STRINGS[10] = uString::Const("Logic with JavaScript");
    ::STRINGS[11] = uString::Const("Click the screen to add items");
    ::STRINGS[12] = uString::Const("var Observable = require('FuseJS/Observable');\n"
        "\t\t\t\t\titems = Observable();\n"
        "\t\t\t\t\tfunction addItem(){\n"
        "\t\t\t\t\t\titems.add({\n"
        "\t\t\t\t\t\t\tcolor : [Math.random(), Math.random(), Math.random(), 1],\n"
        "\t\t\t\t\t\t\theight : (Math.random() + 1.0) * 80\n"
        "\t\t\t\t\t\t});\n"
        "\t\t\t\t\t}\n"
        "\t\t\t\t\tmodule.exports = {\n"
        "\t\t\t\t\t\titems : items,\n"
        "\t\t\t\t\t\taddItem : addItem\n"
        "\t\t\t\t\t};");
    ::STRINGS[13] = uString::Const("MainView.ux");
    ::STRINGS[14] = uString::Const("Realtime effects");
    ::STRINGS[15] = uString::Const("Use the slider to blur the logo");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[6] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[10] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[11] = ::g::Fuse::Visual_typeof();
    ::TYPES[12] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[14] = ::g::Fuse::Binding_typeof();
    ::TYPES[15] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[17] = ::g::Uno::UX::Template_typeof();
    ::TYPES[18] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[20] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[21] = uObject_typeof();
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Effects::Blur_typeof(), offsetof(::g::MainView, myBlur), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, myBlur_Radius_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, myRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::MainView, myRectangle_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::MainView, myRectangle_CornerRadius_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::MainView, temp_Items_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :62
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :66
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :62
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;

// public MainView() [instance] :62
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :66
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp1 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp2 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp3 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Storage::StorageModule* temp4 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp5 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Polyfills::Window::WindowModule* temp6 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp7 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp8 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp9 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp10 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp11 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp12 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp13 = ::g::FuseJS::UserEvents::New2();
    myRectangle = ::g::Fuse::Controls::Rectangle::New3();
    myRectangle_Color_inst = ::g::MyFirstFuseProject_FuseControlsRectangle_Color_Property::New1(myRectangle, MainView::__selector0());
    myRectangle_CornerRadius_inst = ::g::MyFirstFuseProject_FuseControlsRectangle_CornerRadius_Property::New1(myRectangle, MainView::__selector1());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New2();
    temp_Items_inst = ::g::MyFirstFuseProject_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector2());
    myBlur = ::g::Fuse::Effects::Blur::New2();
    myBlur_Radius_inst = ::g::MyFirstFuseProject_FuseEffectsBlur_Radius_Property::New1(myBlur, MainView::__selector3());
    ::g::Fuse::Controls::ClientPanel* temp14 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::PageControl* temp15 = ::g::Fuse::Controls::PageControl::New4();
    ::g::PageWithTitle* temp16 = ::g::PageWithTitle::New5();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::WhilePressed* temp18 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Rotate* temp19 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Scale* temp20 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float4>*/], myRectangle_Color_inst);
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float4>*/], myRectangle_CornerRadius_inst);
    ::g::PageWithTitle* temp23 = ::g::PageWithTitle::New5();
    ::g::Fuse::Reactive::JavaScript* temp24 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp25 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Panel* temp26 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Layouts::ColumnLayout* temp27 = ::g::Fuse::Layouts::ColumnLayout::New2();
    MainView__Template* item = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp28 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[6/*"items"*/]);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"addItem"*/]);
    ::g::PageWithTitle* temp29 = ::g::PageWithTitle::New5();
    ::g::Fuse::Controls::Grid* temp30 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp31 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Slider* temp32 = ::g::Fuse::Controls::Slider::New5();
    ::g::Fuse::Triggers::ProgressAnimation* temp33 = ::g::Fuse::Triggers::ProgressAnimation::New2();
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[6/*Fuse.Animations.Change<float>*/], myBlur_Radius_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp16->Title(::STRINGS[8/*"Basic anima...*/]);
    temp16->Color(::g::Uno::Float4__New2(0.9960784f, 0.9921569f, 0.9882353f, 1.0f));
    temp16->HeaderColor(::g::Uno::Float4__New2(0.3490196f, 0.372549f, 1.0f, 1.0f));
    temp16->HeaderTextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp16->Instructions(::STRINGS[9/*"Tap and hol...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), myRectangle);
    uPtr(myRectangle)->CornerRadius(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(myRectangle)->Color(::g::Uno::Float4__New2(0.282353f, 0.5803922f, 0.8980392f, 1.0f));
    uPtr(myRectangle)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(myRectangle)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(myRectangle)->Name(MainView::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(myRectangle)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    temp19->Degrees(45.0f);
    temp19->Easing(6);
    temp19->Duration(0.5);
    temp20->Factor(2.0f);
    temp20->Easing(6);
    temp20->Duration(0.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(::g::Uno::Float4__New2(0.9882353f, 0.3176471f, 0.5215687f, 1.0f)));
    temp21->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f)));
    temp22->Duration(0.3);
    temp23->Title(::STRINGS[10/*"Logic with ...*/]);
    temp23->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp23->HeaderColor(::g::Uno::Float4__New2(0.9647059f, 0.5607843f, 0.8431373f, 1.0f));
    temp23->HeaderTextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp23->Instructions(::STRINGS[11/*"Click the s...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp23, uDelegate::New(::TYPES[12/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp24->Code(::STRINGS[12/*"var Observa...*/]);
    temp24->LineNumber(37);
    temp24->FileName(::STRINGS[13/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp26->Layout(temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp27->ColumnCount(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[16/*Uno.Collections.ICollection<Uno.UX.Template>*/]), item);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp29->Title(::STRINGS[14/*"Realtime ef...*/]);
    temp29->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->HeaderColor(::g::Uno::Float4__New2(0.172549f, 0.682353f, 0.2470588f, 1.0f));
    temp29->HeaderTextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->Instructions(::STRINGS[15/*"Use the sli...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp30->RowCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp31->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstFuseProject_bundle::FuseLogo0df5df88()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Effects()), ::TYPES[19/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), myBlur);
    uPtr(myBlur)->Radius(0.0f);
    temp32->Alignment(8);
    temp32->Margin(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Animators()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(10.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[22/*Uno.Collections.ICollection<object>*/]), myRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[22/*Uno.Collections.ICollection<object>*/]), myBlur);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
}

// public MainView New() [static] :62
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
