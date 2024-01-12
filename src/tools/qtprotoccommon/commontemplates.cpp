// Copyright (C) 2022 The Qt Company Ltd.
// Copyright (C) 2019 Alexey Edelev <semlanik@gmail.com>, Tatyana Borisova <tanusshhka@mail.ru>
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

#include "commontemplates.h"

// CommonTemplates navigation map:
// All template functions are named as following(with some exceptions):
//     <CommonTemplateType>[TemplateSubject][Declaration|Definition]Template
//
// CommonTemplateType usually describes what template implements e.g. Constructor, Member,
// Property etc.
//
// TemplateSubject is the type that the template is applicable for. The following naming is used for
// the common types:
// ''(empty) - for integral types like int32, fixed32, bool, etc.
// Map       - any map types.
// Repeated  - any repeated types.
// Complex   - means that template is applicable for any non-trivially desctructable types, except
//             messages.
// Message   - for any general protobuf message that is represented as the pointer with lazy
//             initialization
// Enum      - any enum types.
// Oneof     - fields that are part of oneof union.
//
// Map and Repeated can be combined with one of Complex, Message or Enum keywords, that indicates
// the specialization of the template.

using namespace ::qtprotoccommon;

const char *CommonTemplates::ProtoSuffix()
{
    return "_proto";
}

const std::vector<std::string> &CommonTemplates::ListOfQmlExceptions()
{
    static std::vector<std::string> vec{ { "id", "property", "import" } };
    return vec;
}

const char *CommonTemplates::DefaultProtobufIncludesTemplate()
{
    return "#include <QtProtobuf/qprotobufobject.h>\n"
           "#include <QtProtobuf/qprotobuflazymessagepointer.h>\n"
            "\n";
}

const char *CommonTemplates::DefaultQtIncludesTemplate()
{
    return "\n"
           "#include <QtCore/qmetatype.h>\n"
           "#include <QtCore/qlist.h>\n"
           "#include <QtCore/qshareddata.h>\n";
}

const char *CommonTemplates::DefaultSystemIncludesTemplate()
{
    return "\n"
           "#include <memory>\n";
}

const char *CommonTemplates::QmlProtobufIncludesTemplate()
{
    return "#include <QtQml/qqmlregistration.h>\n"
           "#include <QtQml/qqmllist.h>\n\n";
}

const char *CommonTemplates::DisclaimerTemplate()
{
    return "/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */\n\n";
}

const char *CommonTemplates::PreambleTemplate()
{
    return "#ifndef QPROTOBUF_$filename$_H\n"
           "#define QPROTOBUF_$filename$_H\n\n"
           "#include <QtProtobuf/qprotobufmessage.h>\n";
}

const char *CommonTemplates::FooterTemplate()
{
    return "#endif // QPROTOBUF_$filename$_H\n";
}

const char *CommonTemplates::InternalIncludeTemplate()
{
    return "#include \"$include$.h\"\n";
}
const char *CommonTemplates::ExternalIncludeTemplate()
{
    return "#include <$include$>\n";
}
const char *CommonTemplates::GlobalEnumIncludeTemplate()
{
    return "#include <globalenums.h>\n";
}

const char *CommonTemplates::EnumRegistrationDeclaration()
{
    return "$export_macro$ void registerTypes();\n";
}

const char *CommonTemplates::EnumRegistrationDeclarationNoExport()
{
    return "void registerTypes();\n";
}

const char *CommonTemplates::MetaTypeRegistrationDeclaration()
{
    return "static void registerTypes();\n";
}
const char *CommonTemplates::MetaTypeRegistrationMessageDefinition()
{
    return "void $type$::registerTypes()\n{\n"
           "    qRegisterMetaType<$type$>();\n"
           "    qRegisterMetaType<$list_type$>();\n";
}
const char *CommonTemplates::MetaTypeRegistrationGlobalEnumDefinition()
{
    return "void $enum_gadget$::registerTypes()\n{\n";
}
const char *CommonTemplates::MetaTypeRegistrationGlobalEnumTemplate()
{
    return "qRegisterMetaType<$type$>();\n"
           "qRegisterMetaType<$full_type$>();\n";
}
const char *CommonTemplates::UsingMessageTemplate()
{
    return "using $classname$Repeated = QList<$classname$>;\n";
}
const char *CommonTemplates::UsingMapTemplate()
{
    return "using $type$ = QHash<$key_type$, $value_type$>;\n";
}
const char *CommonTemplates::UsingNestedMessageTemplate()
{
    return "using $type$ = $scope_namespaces$::$type$;\n"
           "using $list_type$ = $scope_namespaces$::$list_type$;\n";
}

const char *CommonTemplates::UsingRepeatedEnumTemplate()
{
    return "using $list_type$ = QList<$type$>;\n";
}

const char *CommonTemplates::NamespaceTemplate()
{
    return "namespace $scope_namespaces$ {\n";
}
const char *CommonTemplates::NamespaceClosingTemplate()
{
    return "} // namespace $scope_namespaces$\n";
}
const char *CommonTemplates::EnumDeclarationTemplate()
{
    return "\nnamespace $classname$ {\n"
           "Q_NAMESPACE_EXPORT($export_macro$)\n";
}

const char *CommonTemplates::EnumDeclarationNoExportTemplate()
{
    return "\nnamespace $classname$ {\n"
           "Q_NAMESPACE\n";
}

const char *CommonTemplates::ClassMessageForwardDeclarationTemplate()
{
    return "class $classname$;\n";
}

const char *CommonTemplates::ClassMessageQmlBeginDeclarationTemplate()
{
    return "    QML_VALUE_TYPE($classname_low_case$)\n";
}

const char *CommonTemplates::ClassMessageBeginDeclarationTemplate()
{
    return "\nclass $dataclassname$;\n"
           "class $export_macro$ $classname$ : public QProtobufMessage\n"
           "{\n"
           "    Q_GADGET\n"
           "    Q_PROTOBUF_OBJECT\n"
           "    Q_DECLARE_PROTOBUF_SERIALIZERS($classname$)\n";
}

const char *CommonTemplates::ClassMessageBeginDeclarationTemplateEmptyMacros()
{
    return "\nclass $dataclassname$;\n"
           "class $classname$ : public QProtobufMessage\n"
           "{\n"
           "    Q_GADGET\n"
           "    Q_PROTOBUF_OBJECT\n"
           "    Q_DECLARE_PROTOBUF_SERIALIZERS($classname$)\n";
}

const char *CommonTemplates::ClassMessageDataBeginDeclarationTemplate()
{
    return "\nclass $dataclassname$ : public QSharedData\n"
           "{";
}

const char *CommonTemplates::ConstructorMessageDataDefinitionTemplate()
{
    return "$dataclassname$()\n"
           "    : QSharedData()";
}

const char *CommonTemplates::CopyConstructorMessageDataDefinitionTemplate()
{
    return "$dataclassname$(const $dataclassname$ &other)\n"
           "    : QSharedData(other)";
}

const char *CommonTemplates::PropertyTemplate()
{
    return "Q_PROPERTY($property_type$ $property_name$ READ $property_name$ WRITE "
           "set$property_name_cap$ SCRIPTABLE $scriptable$)\n";
}
const char *CommonTemplates::PropertyRepeatedTemplate()
{
    return "Q_PROPERTY($property_list_type$ $property_name$ READ $property_name$ WRITE "
           "set$property_name_cap$ SCRIPTABLE $scriptable$)\n";
}
const char *CommonTemplates::PropertyRepeatedMessageTemplate()
{
    return "Q_PROPERTY($property_list_type$ $property_name$Data READ $property_name$ WRITE "
           "set$property_name_cap$ SCRIPTABLE $scriptable$)\n";
}
const char *CommonTemplates::PropertyNonScriptableTemplate()
{
    return "Q_PROPERTY($property_type$ $property_name$_p READ $property_name$ WRITE "
           "set$property_name_cap$ SCRIPTABLE false)\n";
}
const char *CommonTemplates::PropertyNonScriptableAliasTemplate()
{
    return "Q_PROPERTY($qml_alias_type$ $property_name$ READ $property_name$_p WRITE "
           "set$property_name_cap$_p SCRIPTABLE true)\n";
}
const char *CommonTemplates::PropertyMessageTemplate()
{
    return "Q_PROPERTY($property_type$ *$property_name$_p READ $property_name$_p WRITE "
           "set$property_name_cap$_p)\n";
}
const char *CommonTemplates::PropertyQmlMessageTemplate()
{
    return "Q_PROPERTY($property_type$ $property_name$ READ $property_name$ WRITE "
           "set$property_name_cap$)\n";
}

const char *CommonTemplates::PropertyOneofTemplate()
{
    return "Q_PROPERTY($property_type$ $property_name$ "
           "READ $property_name$_p WRITE set$property_name_cap$_p)\n";
}
const char *CommonTemplates::PropertyOneofMessageTemplate()
{
    return "Q_PROPERTY($property_type$ *$property_name$ "
           "READ $property_name$_p WRITE set$property_name_cap$_p)\n";
}
const char *CommonTemplates::PropertyHasOneofTemplate()
{
    return "Q_PROPERTY(bool has$property_name_cap$ "
           "READ has$property_name_cap$)\n";
}

const char *CommonTemplates::ConstructorMessageDeclarationTemplate()
{
    return "$classname$();\n";
}

const char *CommonTemplates::DestructorMessageDeclarationTemplate()
{
    return "~$classname$();\n";
}

const char *CommonTemplates::MemberSharedDataPointerTemplate()
{
    return "QExplicitlySharedDataPointer<$dataclassname$> dptr;\n";
}

const char *CommonTemplates::MemberTemplate()
{
    return "$scope_type$ m_$property_name$;\n";
}
const char *CommonTemplates::MemberOneofTemplate()
{
    return "QtProtobufPrivate::QProtobufOneof m_$optional_property_name$;\n";
}
const char *CommonTemplates::MemberRepeatedTemplate()
{
    return "$scope_list_type$ m_$property_name$;\n";
}
const char *CommonTemplates::MemberMessageTemplate()
{
    return "QtProtobufPrivate::QProtobufLazyMessagePointer<$scope_type$> m_$property_name$;\n";
}
const char *CommonTemplates::PublicBlockTemplate()
{
    return "\npublic:\n";
}
const char *CommonTemplates::PrivateBlockTemplate()
{
    return "\nprivate:\n";
}
const char *CommonTemplates::EnumDefinitionTemplate()
{
    return "enum $type$ {\n";
}
const char *CommonTemplates::EnumClassDefinitionTemplate()
{
    return "enum class $type$ {\n";
}
const char *CommonTemplates::EnumFieldTemplate()
{
    return "$enumvalue$ = $value$,\n";
}

const char *CommonTemplates::ConstructorMessageDefinitionTemplate()
{
    return "$classname$::$classname$()\n"
           "    : QProtobufMessage(&$classname$::staticMetaObject),\n"
           "      dptr(new $dataclassname$)";
}

const char *CommonTemplates::EmptyConstructorTemplate()
{
    return "$classname$() {}\n";
}

const char *CommonTemplates::UseNamespace()
{
    return "using namespace $namespace$;\n";
}

const char *CommonTemplates::QObjectConstructorMessageDeclarationTemplate()
{
    return "explicit $classname$(QObject *parent = nullptr);\n";
}

const char *CommonTemplates::CopyConstructorDeclarationTemplate()
{
    return "$classname$(const $classname$ &other);\n";
}
const char *CommonTemplates::MoveConstructorDeclarationTemplate()
{
    return "$classname$($classname$ &&other) noexcept;\n";
}
const char *CommonTemplates::CopyConstructorDefinitionTemplate()
{
    return "$classname$::$classname$(const $classname$ &other)\n"
           "    : QProtobufMessage(other),\n"
           "      dptr(other.dptr)\n"
           "{\n}\n";
}
const char *CommonTemplates::MoveConstructorDefinitionTemplate()
{
    return "$classname$::$classname$($classname$ &&other) noexcept\n"
           "    : QProtobufMessage(std::move(other)),\n"
           "      dptr(std::move(other.dptr))\n"
           "{\n}\n";
}
const char *CommonTemplates::DeletedCopyConstructorTemplate()
{
    return "$classname$(const $classname$ &) = delete;\n";
}
const char *CommonTemplates::DeletedMoveConstructorTemplate()
{
    return "$classname$($classname$ &&) = delete;\n";
}
const char *CommonTemplates::CopyMemberTemplate()
{
    return "m_$property_name$ = other.m_$property_name$;\n";
}
const char *CommonTemplates::CopyMemberOneofTemplate()
{
    return "m_$optional_property_name$ = other.m_$optional_property_name$;\n";
}
const char *CommonTemplates::AssignMemberMessageTemplate()
{
    return "if (m_$property_name$ != other.m_$property_name$)\n"
           "    *m_$property_name$ = *other.m_$property_name$;\n";
}

const char *CommonTemplates::AssignMemberOneofTemplate()
{
    return "set$property_name_cap$_p(other.m_$optional_property_name$);\n";
}

const char *CommonTemplates::MoveMemberMessageTemplate()
{
    return "if (m_$property_name$ != other.m_$property_name$) {\n"
           "    *m_$property_name$ = std::move(*other.m_$property_name$);\n"
           "}\n";
}
const char *CommonTemplates::MoveAssignMemberMessageTemplate()
{
    return "if (m_$property_name$ != other.m_$property_name$)\n"
           "    *m_$property_name$ = std::move(*other.m_$property_name$);\n";
}

const char *CommonTemplates::MoveAssignMemberOneofTemplate()
{
    return "m_$optional_property_name$ = std::move(other.m_$optional_property_name$);\n";
}

const char *CommonTemplates::MoveAssignMemberComplexTemplate()
{
    return "if (m_$property_name$ != other.m_$property_name$)\n"
           "    m_$property_name$ = std::move(other.m_$property_name$);\n";
}

const char *CommonTemplates::MoveConstructorMemberComplexTemplate()
{
    return "m_$property_name$ = std::move(other.m_$property_name$);\n";
}

const char *CommonTemplates::MoveMemberTemplate()
{
    return "m_$property_name$ = std::exchange(other.m_$property_name$, 0);\n";
}
const char *CommonTemplates::MoveMemberEnumTemplate()
{
    return "m_$property_name$ = other.m_$property_name$;\n";
}

const char *CommonTemplates::AssignmentOperatorDeclarationTemplate()
{
    return "$classname$ &operator =(const $classname$ &other);\n";
}
const char *CommonTemplates::AssignmentOperatorDefinitionTemplate()
{
    return "$classname$ &$classname$::operator =(const $classname$ &other)\n"
           "{\n"
           "    QProtobufMessage::operator=(other);\n"
           "    dptr = other.dptr;\n"
           "    return *this;\n"
           "}\n";
}
const char *CommonTemplates::AssignmentOperatorReturnTemplate()
{
    return "return *this;\n";
}

const char *CommonTemplates::MoveAssignmentOperatorDeclarationTemplate()
{
    return "$classname$ &operator =($classname$ &&other) noexcept;\n";
}
const char *CommonTemplates::MoveAssignmentOperatorDefinitionTemplate()
{
    return "$classname$ &$classname$::operator =($classname$ &&other) noexcept\n"
           "{\n"
           "    QProtobufMessage::operator=(std::move(other));\n"
           "    dptr.swap(other.dptr);\n"
           "    return *this;\n"
           "}\n";
}

const char *CommonTemplates::EqualOperatorDeclarationTemplate()
{
    return "bool operator ==(const $classname$ &other) const;\n";
}
const char *CommonTemplates::EqualOperatorDefinitionTemplate()
{
    return "bool $classname$::operator ==(const $classname$ &other) const\n{\n"
           "    return QProtobufMessage::isEqual(*this, other)";
}
const char *CommonTemplates::EqualOperatorMemberTemplate()
{
    return "dptr->m_$property_name$ == other.dptr->m_$property_name$";
}
const char *CommonTemplates::EqualOperatorMemberMessageTemplate()
{
    return "(dptr->m_$property_name$ == other.dptr->m_$property_name$\n"
           "    || *dptr->m_$property_name$ == *other.dptr->m_$property_name$)";
}
const char *CommonTemplates::EqualOperatorMemberRepeatedTemplate()
{
    return "QtProtobuf::repeatedValueCompare(dptr->m_$property_name$, "
           "other.dptr->m_$property_name$)";
}
const char *CommonTemplates::EqualOperatorMemberOneofTemplate()
{
    return "dptr->m_$optional_property_name$ == other.dptr->m_$optional_property_name$";
}

const char *CommonTemplates::NotEqualOperatorDeclarationTemplate()
{
    return "bool operator !=(const $classname$ &other) const;\n";
}
const char *CommonTemplates::NotEqualOperatorDefinitionTemplate()
{
    return "bool $classname$::operator !=(const $classname$ &other) const\n{\n"
           "    return !this->operator ==(other);\n"
           "}\n\n";
}

const char *CommonTemplates::PrivateGetterMessageDeclarationTemplate()
{
    return "$getter_type$ *$property_name$_p() const;\n";
}
const char *CommonTemplates::PrivateGetterMessageDefinitionTemplate()
{
    return "$getter_type$ *$classname$::$property_name$_p() const\n{\n"
           "    return dptr->m_$property_name$ ? dptr->m_$property_name$.get() : nullptr;\n"
           "}\n\n";
}

const char *CommonTemplates::GetterMessageDeclarationTemplate()
{
    return "$getter_type$ &$property_name$() const;\n";
}
const char *CommonTemplates::GetterMessageDefinitionTemplate()
{
    return "$getter_type$ &$classname$::$property_name$() const\n{\n"
           "    return *dptr->m_$property_name$;\n"
           "}\n\n";
}

const char *CommonTemplates::PrivateGetterOneofDeclarationTemplate()
{
    return "$getter_type$ $property_name$_p() const;\n";
}
const char *CommonTemplates::PrivateGetterOneofDefinitionTemplate()
{
    return "$getter_type$ $classname$::$property_name$_p() const\n{\n"
           "    return dptr->m_$optional_property_name$.holdsField($number$) ?\n"
           "        dptr->m_$optional_property_name$.value<$getter_type$>() : "
           "$getter_type$($initializer$);\n"
           "}\n\n";
}

const char *CommonTemplates::PrivateGetterOneofMessageDeclarationTemplate()
{
    return "$getter_type$ *$property_name$_p() const;\n";
}
const char *CommonTemplates::PrivateGetterOneofMessageDefinitionTemplate()
{
    return "$getter_type$ *$classname$::$property_name$_p() const\n{\n"
           "    return dptr->m_$optional_property_name$.holdsField($number$) ?\n"
           "        dptr->m_$optional_property_name$.value<$getter_type$>() : nullptr;\n"
           "}\n\n";
}

const char *CommonTemplates::GetterOneofFieldNumberDeclarationTemplate()
{
    return "$type$ $optional_property_name$Field() const;\n";
}
const char *CommonTemplates::GetterOneofFieldNumberDefinitionTemplate()
{
    return "$classname$::$type$ $classname$::$optional_property_name$Field() const\n{\n"
           "    return "
           "static_cast<$type$>(dptr->m_$optional_property_name$.fieldNumber());\n"
           "}\n";
}

const char *CommonTemplates::GetterOneofDeclarationTemplate()
{
    return "bool has$property_name_cap$() const;\n"
           "$getter_type$ $property_name$() const;\n";
}
const char *CommonTemplates::GetterOneofDefinitionTemplate()
{
    return "bool $classname$::has$property_name_cap$() const\n{\n"
           "    return dptr->m_$optional_property_name$.holdsField($number$);\n"
           "}\n"
           "$getter_type$ $classname$::$property_name$() const\n{\n"
           "    Q_ASSERT(dptr->m_$optional_property_name$.holdsField($number$));\n"
           "    return dptr->m_$optional_property_name$.value<$getter_type$>();\n"
           "}\n\n";
}

const char *CommonTemplates::GetterOneofMessageDeclarationTemplate()
{
    return "bool has$property_name_cap$() const;\n"
           "$getter_type$ &$property_name$() const;\n";
}
const char *CommonTemplates::GetterOneofMessageDefinitionTemplate()
{
    return "bool $classname$::has$property_name_cap$() const\n{\n"
           "    return dptr->m_$optional_property_name$.holdsField($number$);\n"
           "}\n"
           "$getter_type$ &$classname$::$property_name$() const\n{\n"
           "    Q_ASSERT(dptr->m_$optional_property_name$.holdsField($number$));\n"
           "    return *(dptr->m_$optional_property_name$.value<$getter_type$>());\n"
           "}\n\n";
}

const char *CommonTemplates::GetterDeclarationTemplate()
{
    return "$getter_type$ $property_name$() const;\n";
}

const char *CommonTemplates::GetterDefinitionTemplate()
{
    return "$getter_type$ $classname$::$property_name$() const\n{\n"
           "    return dptr->m_$property_name$;\n"
           "}\n\n";
}

const char *CommonTemplates::GetterNonScriptableDeclarationTemplate()
{
    return "$qml_alias_type$ $property_name$_p() const;\n";
}

const char *CommonTemplates::GetterNonScriptableDefinitionTemplate()
{
    return "$qml_alias_type$ $classname$::$property_name$_p() const\n{\n"
           "    return dptr->m_$property_name$;\n"
           "}\n\n";
}

const char *CommonTemplates::GetterComplexDeclarationTemplate()
{
    return "$getter_type$ &$property_name$();\n";
}

const char *CommonTemplates::GetterComplexDefinitionTemplate()
{
    return "$getter_type$ &$classname$::$property_name$()\n{\n"
           "    dptr.detach();\n"
           "    return dptr->m_$property_name$;\n"
           "}\n\n";
}

const char *CommonTemplates::GetterQmlListDeclarationTemplate()
{
    return "QQmlListProperty<$scope_type$> $property_name$_l();\n";
}
const char *CommonTemplates::GetterQmlListDefinitionTemplate()
{
    return "QQmlListProperty<$full_type$> $classname$::$property_name$_l()\n{\n"
           "    return qProtobufConstructQmlListProperty<$scope_type$>(this, "
           "&dptr->m_$property_name$);\n"
           "}\n\n";
}

const char *CommonTemplates::PrivateSetterMessageDeclarationTemplate()
{
    return "void set$property_name_cap$_p($setter_type$ *$property_name$);\n";
}
const char *CommonTemplates::PrivateSetterMessageDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$_p($setter_type$ *$property_name$)\n{\n"
           "    if (dptr->m_$property_name$.get() != $property_name$) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$property_name$.reset($property_name$);\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::SetterMessageDeclarationTemplate()
{
    return "void set$property_name_cap$(const $setter_type$ &$property_name$);\n";
}
const char *CommonTemplates::SetterMessageDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$(const $setter_type$ &$property_name$)\n{\n"
           "    if (*dptr->m_$property_name$ != $property_name$) {\n"
           "        dptr.detach();\n"
           "        *dptr->m_$property_name$ = $property_name$;\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::SetterComplexDeclarationTemplate()
{
    return "void set$property_name_cap$(const $setter_type$ &$property_name$);\n";
}
const char *CommonTemplates::SetterComplexDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$(const $setter_type$ &$property_name$)\n{\n"
           "    if (dptr->m_$property_name$ != $property_name$) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$property_name$ = $property_name$;\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::PrivateSetterOneofMessageDeclarationTemplate()
{
    return "void set$property_name_cap$_p($setter_type$ *$property_name$);\n";
}
const char *CommonTemplates::PrivateSetterOneofMessageDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$_p($setter_type$ *$property_name$)\n{\n"
           "    const $setter_type$ &value = *$property_name$;\n"
           "    if (!dptr->m_$optional_property_name$.isEqual(value, $number$)) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$optional_property_name$.setValue(value, $number$);\n"
           "    }\n"
           "    delete $property_name$;\n"
           "}\n\n";
}

const char *CommonTemplates::PrivateSetterOneofDeclarationTemplate()
{
    return "void set$property_name_cap$_p($setter_type$ $property_name$);\n";
}
const char *CommonTemplates::PrivateSetterOneofDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$_p($setter_type$ $property_name$)\n{\n"
           "    if (!dptr->m_$optional_property_name$.isEqual($property_name$, $number$)) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$optional_property_name$.setValue($property_name$, $number$);\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::ClearOneofDeclarationTemplate()
{
    return "void clear$optional_property_name_cap$();\n";
}
const char *CommonTemplates::ClearOneofDefinitionTemplate()
{
    return "void $classname$::clear$optional_property_name_cap$()\n{\n"
           "    if (dptr->m_$optional_property_name$.fieldNumber() != "
           "QtProtobuf::InvalidFieldNumber) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$optional_property_name$ = QtProtobufPrivate::QProtobufOneof();\n"
           "    }\n"
           "}\n";
}

const char *CommonTemplates::SetterOneofDeclarationTemplate()
{
    return "void set$property_name_cap$(const $setter_type$ &$property_name$);\n";
}
const char *CommonTemplates::SetterOneofDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$(const $setter_type$ &$property_name$)\n{\n"
           "    if (!dptr->m_$optional_property_name$.isEqual($property_name$, $number$)) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$optional_property_name$.setValue($property_name$, $number$);\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::SetterDeclarationTemplate()
{
    return "void set$property_name_cap$(const $setter_type$ &$property_name$);\n";
}

const char *CommonTemplates::SetterDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$(const $setter_type$ &$property_name$)\n"
           "{\n"
           "    if (dptr->m_$property_name$ != $property_name$) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$property_name$ = $property_name$;\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::SetterNonScriptableDeclarationTemplate()
{
    return "void set$property_name_cap$_p(const $qml_alias_type$ &$property_name$);\n";
}

const char *CommonTemplates::SetterNonScriptableDefinitionTemplate()
{
    return "void $classname$::set$property_name_cap$_p(const $qml_alias_type$ &$property_name$)\n"
           "{\n"
           "    if (dptr->m_$property_name$ != $property_name$) {\n"
           "        dptr.detach();\n"
           "        dptr->m_$property_name$ = $property_name$;\n"
           "    }\n"
           "}\n\n";
}

const char *CommonTemplates::SignalsBlockTemplate()
{
    return "\nQ_SIGNALS:\n";
}
const char *CommonTemplates::SignalTemplate()
{
    return "void $property_name$Changed();\n";
}

const char *CommonTemplates::MetaDataUintDataEntryTemplate()
{
    return "const std::array<uint, $size$> qt_protobuf_$classname$_uint_data =";
}

const char *CommonTemplates::MetaDataCharDataEntryTemplate()
{
    return "const char qt_protobuf_$classname$_char_data[$size$] =";
}

const char *CommonTemplates::JsonNameOffsetsUintDataTemplate()
{
    return "$json_name_offset$, /* = $json_name$ */\n";
}

const char *CommonTemplates::FieldNumbersUintDataTemplate()
{
    return "$field_number$, /* = $json_name$ */\n";
}

const char *CommonTemplates::QtPropertyIndicesUintDataTemplate()
{
    return "$property_index$, /* = $json_name$ */\n";
}

const char *CommonTemplates::FieldFlagsUintDataTemplate()
{
    return "$field_flags$, /* = $json_name$ */\n";
}

const char *CommonTemplates::PropertyOrderingDataOpeningTemplate()
{
    return "static constexpr struct {\n"
           "    QtProtobufPrivate::QProtobufPropertyOrdering::Data data;\n"
           "    const std::array<uint, $uint_size$> qt_protobuf_$classname$_uint_data;\n"
           "    const char qt_protobuf_$classname$_char_data[$char_size$];\n"
           "} qt_protobuf_$classname$_metadata {\n"
           "    // data\n"
           "    {\n"
           "        $version_number$, /* = version */\n"
           "        $num_fields$, /* = num fields */\n"
           "        $field_number_offset$, /* = field number offset */\n"
           "        $property_index_offset$, /* = property index offset */\n"
           "        $field_flags_offset$, /* = field flags offset */\n"
           "        $message_full_name_size$, /* = message full name length */\n"
           "    },\n";
}

const char *CommonTemplates::PropertyOrderingDataClosingTemplate()
{
    return "};\n\n";
}
const char *CommonTemplates::PropertyOrderingDefinitionTemplate()
{
    return "const QtProtobufPrivate::QProtobufPropertyOrdering $type$::propertyOrdering = {\n"
           "    &qt_protobuf_$classname$_metadata.data\n"
           "};\n\n";
}

const char *CommonTemplates::SimpleBlockEnclosureTemplate()
{
    return "}\n\n";
}
const char *CommonTemplates::SemicolonBlockEnclosureTemplate()
{
    return "};\n";
}
const char *CommonTemplates::InitializerMemberTemplate()
{
    return "m_$property_name$($initializer$)";
}
const char *CommonTemplates::InitializerMemberMessageTemplate()
{
    return "m_$property_name$(nullptr)";
}
const char *CommonTemplates::CopyInitializerMemberTemplate()
{
    return "m_$property_name$(other.m_$property_name$)";
}
const char *CommonTemplates::CopyInitializerMemberMessageTemplate()
{
    return "m_$property_name$(other.m_$property_name$\n"
           "                                     ? new $scope_type$(*other.m_$property_name$)\n"
           "                                     : nullptr)";
}
const char *CommonTemplates::CopyInitializerMemberOneofTemplate()
{
    return "m_$optional_property_name$(other.m_$optional_property_name$)";
}
const char *CommonTemplates::EmptyBracesTemplate()
{
    return "\n{\n}\n\n";
}

const char *CommonTemplates::DeclareMetaTypeTemplate()
{
    return "Q_DECLARE_METATYPE($full_type$)\n";
}

const char *CommonTemplates::MetaTypeRegistrationLocalEnumTemplate()
{
    return "qRegisterProtobufEnumType<$scope_type$>();\n"
           "qRegisterMetaType<$scope_type$>();\n"
           "qRegisterMetaType<$scope_list_type$>();\n";
}
const char *CommonTemplates::MetaTypeRegistrationMapTemplate()
{
    return "qRegisterMetaType<$scope_type$>();\n"
           "qRegisterProtobufMapType<$key_type$, $value_type$>();\n";
}

const char *CommonTemplates::QEnumTemplate()
{
    return "Q_ENUM($type$)\n";
}

const char *CommonTemplates::QEnumNSTemplate()
{
    return "Q_ENUM_NS($type$)\n";
}

const char *CommonTemplates::RegisterEnumSerializersTemplate()
{
    return "qRegisterProtobufEnumType<$full_type$>();\n";
}
const char *CommonTemplates::RegistrarTemplate()
{
    return "static QtProtobuf::ProtoTypeRegistrar "
           "ProtoTypeRegistrar$classname$(qRegisterProtobufType<$classname$>);\n";
}
const char *CommonTemplates::RegistrarEnumTemplate()
{
    return "static QtProtobuf::ProtoTypeRegistrar "
           "ProtoTypeRegistrar$enum_gadget$($enum_gadget$::registerTypes);\n";
}
const char *CommonTemplates::QmlRegisterTypeTemplate()
{
    return "qmlRegisterType<$scope_type$>(\"$qml_package$\", 1, 0, \"$type$\");\n";
}

const char *CommonTemplates::QmlRegisterGlobalEnumTypeTemplate()
{
    return "    qmlRegisterUncreatableMetaObject(\n"
           "        $scope_namespaces$::staticMetaObject,\n"
           "        uri, 1, 0, \"$type$\", "
           "\"You can only use the nested enums of $type$, "
           "but not create its instances in QML scope.\");\n";
}

const char *CommonTemplates::QmlRegisterMessageTypeTemplate()
{
    return "    qmlRegisterUncreatableMetaObject(\n"
           "        $full_type$::staticMetaObject,\n"
           "        uri, 1, 0, \"$type$\", "
           "\"You can only use the nested enums of $type$, "
           "but not create its instances in QML scope.\");\n";
}

const char *CommonTemplates::QmlRegisterProtobufTypes()
{
    return "        qRegisterProtobufTypes();\n";
}

const char *CommonTemplates::RepeatedSuffix()
{
    return "Repeated";
}

// Those marked "Limited" have limited usage in QML, since QML only supports signed integers.
// See https://doc.qt.io/qt-6/qtqml-typesystem-valuetypes.html for types that are supported by the
// QML JS engine.
const std::unordered_map<::google::protobuf::FieldDescriptor::Type, std::string>
        &CommonTemplates::TypeReflection()
{
    static std::unordered_map<::google::protobuf::FieldDescriptor::Type, std::string> map{
        { ::google::protobuf::FieldDescriptor::TYPE_DOUBLE, "double" },
        { ::google::protobuf::FieldDescriptor::TYPE_FLOAT, "float" },
        { ::google::protobuf::FieldDescriptor::TYPE_INT64, "int64" }, // Limited
        { ::google::protobuf::FieldDescriptor::TYPE_UINT64, "uint64" }, // Limited
        { ::google::protobuf::FieldDescriptor::TYPE_INT32, "int32" },
        { ::google::protobuf::FieldDescriptor::TYPE_FIXED64, "fixed64" }, // Limited
        { ::google::protobuf::FieldDescriptor::TYPE_FIXED32, "fixed32" },
        { ::google::protobuf::FieldDescriptor::TYPE_BOOL, "bool" },
        { ::google::protobuf::FieldDescriptor::TYPE_STRING, "QString" },
        { ::google::protobuf::FieldDescriptor::TYPE_BYTES, "QByteArray" },
        { ::google::protobuf::FieldDescriptor::TYPE_UINT32, "uint32" }, // Limited
        { ::google::protobuf::FieldDescriptor::TYPE_SFIXED32, "sfixed32" },
        { ::google::protobuf::FieldDescriptor::TYPE_SFIXED64, "sfixed64" }, // Limited
        { ::google::protobuf::FieldDescriptor::TYPE_SINT32, "sint32" },
        { ::google::protobuf::FieldDescriptor::TYPE_SINT64, "sint64" } // Limited
    };
    return map;
}

const char *CommonTemplates::ProtoFileSuffix()
{
    return ".qpb";
}

const char *CommonTemplates::EnumClassSuffix()
{
    return "Gadget";
}

const char *CommonTemplates::QtProtobufNamespace()
{
    return "QtProtobuf";
}
const char *CommonTemplates::QtProtobufNestedNamespace()
{
    return "_QtProtobufNested";
}

const char *CommonTemplates::DataClassName()
{
    return "_QtProtobufData";
}

const char *CommonTemplates::QtProtobufFieldEnum()
{
    return "QtProtobufFieldEnum";
}
const char *CommonTemplates::FieldEnumTemplate()
{
    return "enum QtProtobufFieldEnum {\n";
}
const char *CommonTemplates::FieldNumberTemplate()
{
    return "$property_name_cap$ProtoFieldNumber = $number$,\n";
}

const char *CommonTemplates::ExportMacroTemplate()
{
    return "#if defined(QT_SHARED) || !defined(QT_STATIC)\n"
           "#  if defined(QT_BUILD_$export_macro$_LIB)\n"
           "#    define QPB_$export_macro$_EXPORT Q_DECL_EXPORT\n"
           "#  else\n"
           "#    define QPB_$export_macro$_EXPORT Q_DECL_IMPORT\n"
           "#  endif\n"
           "#else\n"
           "#  define QPB_$export_macro$_EXPORT\n"
           "#endif\n";
}

const char *CommonTemplates::QmlPluginExportMacroTemplate()
{
    return "#if defined(QT_SHARED) || !defined(QT_STATIC)\n"
           "#  define QPB_QML_EXPORT Q_DECL_EXPORT\n"
           "#else\n"
           "#  define QPB_QML_EXPORT\n"
           "#endif\n";
}

const char *CommonTemplates::QmlExtensionPluginPreamble()
{
    return "\nextern void qml_register_types_$qml_package_escaped$();\n"
           "Q_GHS_KEEP_REFERENCE(qml_register_types_$qml_package_escaped$);\n";
}

const char *CommonTemplates::QmlExtensionPluginClass()
{
    return "\nclass QPB_QML_EXPORT $plugin_name$Plugin : public QQmlExtensionPlugin\n";
}

const char *CommonTemplates::QmlExtensionPluginClassBody()
{
    return "{\n"
           "    Q_OBJECT\n"
           "    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)\n\n"
           "public:\n"
           "    $plugin_name$Plugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) { }\n\n"
           "    void registerTypes(const char *uri) override\n"
           "    {\n"
           "        Q_ASSERT(uri == QLatin1String(\"$qml_package$\"));\n"
           "        volatile auto registration = &qml_register_types_$qml_package_escaped$;\n"
           "        Q_UNUSED(registration);\n"
           "        qmlRegisterModule(uri, 1, 0);\n";
}

const char *CommonTemplates::MocIncludeTemplate()
{
    return "#include \"$source_file$\"\n";
}
