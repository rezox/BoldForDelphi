(*****************************************)
(*      This file is autogenerated       *)
(*   Any manual changes will be LOST!    *)
(*****************************************)
(* Generated 2002-04-05 17:04:44         *)
(*****************************************)
(* This file should be stored in the     *)
(* same directory as the form/datamodule *)
(* with the corresponding model          *)
(*****************************************)
(* Copyright notice:                     *)
(*                                       *)
(*****************************************)

{$IFNDEF ModelEvClasses_Interface.inc}
{$DEFINE ModelEvClasses_Interface.inc}

{$IFNDEF ModelEvClasses_unitheader}
unit ModelEvClasses;
{$ENDIF}

interface

uses
  // interface uses
  // interface dependencies
  // attribute classes
  BoldAttributes,
  // other
  Classes,
  Controls, // for TDate
  SysUtils,
  BoldDefs,
  BoldSubscription,
  BoldDeriver,
  BoldElements,
  BoldDomainElement,
  BoldSystemRT,
  BoldSystem;

type
  { forward declarations of all classes }

  TBusinessClassesRoot = class;
  TBusinessClassesRootList = class;
  TOrder = class;
  TOrderList = class;
  TOrderItem = class;
  TOrderItemList = class;
  TPerson = class;
  TPersonList = class;
  TProduct = class;
  TProductList = class;

  TBusinessClassesRoot = class(TBoldObject)
  private
  protected
  public
  end;

  TOrder = class(TBusinessClassesRoot)
  private
    function _Get_M_orderDate: TBADate;
    function _GetorderDate: TDate;
    procedure _SetorderDate(NewValue: TDate);
    function _Get_M_totalCost: TBACurrency;
    function _GettotalCost: Currency;
    function _Get_M_discount: TBAInteger;
    function _Getdiscount: Integer;
    procedure _Setdiscount(NewValue: Integer);
    function _GetPerson: TPerson;
    function _Get_M_Person: TBoldObjectReference;
    procedure _SetPerson(value: TPerson);
    function _GetOrderItem: TOrderItemList;
  protected
  public
    property M_orderDate: TBADate read _Get_M_orderDate;
    property M_totalCost: TBACurrency read _Get_M_totalCost;
    property M_discount: TBAInteger read _Get_M_discount;
    property M_Person: TBoldObjectReference read _Get_M_Person;
    property M_OrderItem: TOrderItemList read _GetOrderItem;
    property orderDate: TDate read _GetorderDate write _SetorderDate;
    property totalCost: Currency read _GettotalCost;
    property discount: Integer read _Getdiscount write _Setdiscount;
    property Person: TPerson read _GetPerson write _SetPerson;
    property OrderItem: TOrderItemList read _GetOrderItem;
  end;

  TOrderItem = class(TBusinessClassesRoot)
  private
    function _Get_M_qty: TBAInteger;
    function _Getqty: Integer;
    procedure _Setqty(NewValue: Integer);
    function _GetOrder: TOrder;
    function _Get_M_Order: TBoldObjectReference;
    procedure _SetOrder(value: TOrder);
    function _GetProduct: TProduct;
    function _Get_M_Product: TBoldObjectReference;
    procedure _SetProduct(value: TProduct);
  protected
  public
    property M_qty: TBAInteger read _Get_M_qty;
    property M_Order: TBoldObjectReference read _Get_M_Order;
    property M_Product: TBoldObjectReference read _Get_M_Product;
    property qty: Integer read _Getqty write _Setqty;
    property Order: TOrder read _GetOrder write _SetOrder;
    property Product: TProduct read _GetProduct write _SetProduct;
  end;

  TPerson = class(TBusinessClassesRoot)
  private
    function _Get_M_fullName: TBAString;
    function _GetfullName: String;
    procedure _SetfullName(NewValue: String);
    function _GetOrder: TOrderList;
  protected
  public
    property M_fullName: TBAString read _Get_M_fullName;
    property M_Order: TOrderList read _GetOrder;
    property fullName: String read _GetfullName write _SetfullName;
    property Order: TOrderList read _GetOrder;
  end;

  TProduct = class(TBusinessClassesRoot)
  private
    function _Get_M_cost: TBACurrency;
    function _Getcost: Currency;
    procedure _Setcost(NewValue: Currency);
    function _Get_M_description: TBAString;
    function _Getdescription: String;
    procedure _Setdescription(NewValue: String);
    function _GetOrderItem: TOrderItemList;
  protected
  public
    property M_cost: TBACurrency read _Get_M_cost;
    property M_description: TBAString read _Get_M_description;
    property M_OrderItem: TOrderItemList read _GetOrderItem;
    property cost: Currency read _Getcost write _Setcost;
    property description: String read _Getdescription write _Setdescription;
    property OrderItem: TOrderItemList read _GetOrderItem;
  end;

  TBusinessClassesRootList = class(TBoldObjectList)
  protected
    function GetBoldObject(index: Integer): TBusinessClassesRoot;
    procedure SetBoldObject(index: Integer; NewObject: TBusinessClassesRoot);
  public
    function Includes(anObject: TBusinessClassesRoot): Boolean;
    function IndexOf(anObject: TBusinessClassesRoot): Integer;
    procedure Add(NewObject: TBusinessClassesRoot);
    function AddNew: TBusinessClassesRoot;
    procedure Insert(index: Integer; NewObject: TBusinessClassesRoot);
    property BoldObjects[index: Integer]: TBusinessClassesRoot read GetBoldObject write SetBoldObject; default;
  end;

  TOrderList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TOrder;
    procedure SetBoldObject(index: Integer; NewObject: TOrder);
  public
    function Includes(anObject: TOrder): Boolean;
    function IndexOf(anObject: TOrder): Integer;
    procedure Add(NewObject: TOrder);
    function AddNew: TOrder;
    procedure Insert(index: Integer; NewObject: TOrder);
    property BoldObjects[index: Integer]: TOrder read GetBoldObject write SetBoldObject; default;
  end;

  TOrderItemList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TOrderItem;
    procedure SetBoldObject(index: Integer; NewObject: TOrderItem);
  public
    function Includes(anObject: TOrderItem): Boolean;
    function IndexOf(anObject: TOrderItem): Integer;
    procedure Add(NewObject: TOrderItem);
    function AddNew: TOrderItem;
    procedure Insert(index: Integer; NewObject: TOrderItem);
    property BoldObjects[index: Integer]: TOrderItem read GetBoldObject write SetBoldObject; default;
  end;

  TPersonList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TPerson;
    procedure SetBoldObject(index: Integer; NewObject: TPerson);
  public
    function Includes(anObject: TPerson): Boolean;
    function IndexOf(anObject: TPerson): Integer;
    procedure Add(NewObject: TPerson);
    function AddNew: TPerson;
    procedure Insert(index: Integer; NewObject: TPerson);
    property BoldObjects[index: Integer]: TPerson read GetBoldObject write SetBoldObject; default;
  end;

  TProductList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TProduct;
    procedure SetBoldObject(index: Integer; NewObject: TProduct);
  public
    function Includes(anObject: TProduct): Boolean;
    function IndexOf(anObject: TProduct): Integer;
    procedure Add(NewObject: TProduct);
    function AddNew: TProduct;
    procedure Insert(index: Integer; NewObject: TProduct);
    property BoldObjects[index: Integer]: TProduct read GetBoldObject write SetBoldObject; default;
  end;

function GeneratedCodeCRC: String;

implementation

{$ENDIF}

 