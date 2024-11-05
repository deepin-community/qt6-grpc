/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef ONEOFMESSAGES_QPB_H
#define ONEOFMESSAGES_QPB_H

#include "basicmessages.qpb.h"
#include "tst_qtprotobufgen_qml_gen_exports.qpb.h"

#include <QtProtobuf/qprotobuflazymessagepointer.h>
#include <QtProtobuf/qprotobufmessage.h>
#include <QtProtobuf/qprotobufobject.h>
#include <QtProtobuf/qprotobufoneof.h>
#include <QtProtobuf/qtprotobuftypes.h>

#include <QtQml/qqmllist.h>
#include <QtQml/qqmlregistration.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qlist.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qshareddata.h>
#include <QtCore/qstring.h>

namespace qtprotobufnamespace::tests {
class OneofSimpleMessage;
using OneofSimpleMessageRepeated = QList<OneofSimpleMessage>;
namespace OneofSimpleMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
enum class TestOneofFields;
} // namespace OneofSimpleMessage_QtProtobufNested

class OneofComplexMessage;
using OneofComplexMessageRepeated = QList<OneofComplexMessage>;
namespace OneofComplexMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
enum class TestOneofFields;
enum class SecondOneofFields;
} // namespace OneofComplexMessage_QtProtobufNested


class OneofSimpleMessage_QtProtobufData;
class OneofSimpleMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT)
    QML_VALUE_TYPE(oneofSimpleMessage)
    Q_PROPERTY(QtProtobuf::int32 testOneofFieldInt READ testOneofFieldInt_p WRITE setTestOneofFieldInt_p)
    Q_PROPERTY(bool hasTestOneofFieldInt READ hasTestOneofFieldInt)
    Q_PROPERTY(QtProtobuf::int32 testOneofFieldSecondInt READ testOneofFieldSecondInt_p WRITE setTestOneofFieldSecondInt_p)
    Q_PROPERTY(bool hasTestOneofFieldSecondInt READ hasTestOneofFieldSecondInt)

public:
    using QtProtobufFieldEnum = OneofSimpleMessage_QtProtobufNested::QtProtobufFieldEnum;
    using TestOneofFields = OneofSimpleMessage_QtProtobufNested::TestOneofFields;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofSimpleMessage();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ~OneofSimpleMessage();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofSimpleMessage(const OneofSimpleMessage &other);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofSimpleMessage &operator =(const OneofSimpleMessage &other);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofSimpleMessage(OneofSimpleMessage &&other) noexcept;
    OneofSimpleMessage &operator =(OneofSimpleMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(OneofSimpleMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasTestOneofFieldInt() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testOneofFieldInt() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasTestOneofFieldSecondInt() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testOneofFieldSecondInt() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT TestOneofFields testOneofField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofFieldInt(QtProtobuf::int32 testOneofFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofFieldSecondInt(QtProtobuf::int32 testOneofFieldSecondInt);
    Q_INVOKABLE QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void clearTestOneof();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool comparesEqual(const OneofSimpleMessage &lhs, const OneofSimpleMessage &rhs) noexcept;
    friend bool operator==(const OneofSimpleMessage &lhs, const OneofSimpleMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const OneofSimpleMessage &lhs, const OneofSimpleMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testOneofFieldInt_p() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testOneofFieldSecondInt_p() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofFieldInt_p(QtProtobuf::int32 testOneofFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofFieldSecondInt_p(QtProtobuf::int32 testOneofFieldSecondInt);
    QExplicitlySharedDataPointer<OneofSimpleMessage_QtProtobufData> dptr;
};
namespace OneofSimpleMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(OneofSimpleMessage)

enum class QtProtobufFieldEnum {
    TestOneofFieldIntProtoFieldNumber = 1,
    TestOneofFieldSecondIntProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

enum class TestOneofFields : int32_t {
    UninitializedField = QtProtobuf::InvalidFieldNumber,
    TestOneofFieldInt = 1,
    TestOneofFieldSecondInt = 2,
};
Q_ENUM_NS(TestOneofFields)

} // namespace OneofSimpleMessage_QtProtobufNested

class OneofComplexMessage_QtProtobufData;
class OneofComplexMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT)
    QML_VALUE_TYPE(oneofComplexMessage)
    Q_PROPERTY(QtProtobuf::int32 testFieldInt READ testFieldInt WRITE setTestFieldInt SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::int32 testOneofFieldInt READ testOneofFieldInt_p WRITE setTestOneofFieldInt_p)
    Q_PROPERTY(bool hasTestOneofFieldInt READ hasTestOneofFieldInt)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage *testOneofComplexField_p READ testOneofComplexField_p WRITE setTestOneofComplexField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestOneofComplexField READ hasTestOneofComplexField)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage *testOneofSecondComplexField_p READ testOneofSecondComplexField_p WRITE setTestOneofSecondComplexField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestOneofSecondComplexField READ hasTestOneofSecondComplexField)
    Q_PROPERTY(QtProtobuf::int32 secondFieldInt READ secondFieldInt_p WRITE setSecondFieldInt_p)
    Q_PROPERTY(bool hasSecondFieldInt READ hasSecondFieldInt)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage *secondComplexField_p READ secondComplexField_p WRITE setSecondComplexField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasSecondComplexField READ hasSecondComplexField)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage *secondSecondComplexField_p READ secondSecondComplexField_p WRITE setSecondSecondComplexField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasSecondSecondComplexField READ hasSecondSecondComplexField)
    Q_PROPERTY(QtProtobuf::int32 testSnakeCaseField READ testSnakeCaseField_p WRITE setTestSnakeCaseField_p)
    Q_PROPERTY(bool hasTestSnakeCaseField READ hasTestSnakeCaseField)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage testOneofComplexField READ testOneofComplexField WRITE setTestOneofComplexField)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage testOneofSecondComplexField READ testOneofSecondComplexField WRITE setTestOneofSecondComplexField)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage secondComplexField READ secondComplexField WRITE setSecondComplexField)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessage secondSecondComplexField READ secondSecondComplexField WRITE setSecondSecondComplexField)

public:
    using QtProtobufFieldEnum = OneofComplexMessage_QtProtobufNested::QtProtobufFieldEnum;
    using TestOneofFields = OneofComplexMessage_QtProtobufNested::TestOneofFields;
    using SecondOneofFields = OneofComplexMessage_QtProtobufNested::SecondOneofFields;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofComplexMessage();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ~OneofComplexMessage();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofComplexMessage(const OneofComplexMessage &other);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofComplexMessage &operator =(const OneofComplexMessage &other);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT OneofComplexMessage(OneofComplexMessage &&other) noexcept;
    OneofComplexMessage &operator =(OneofComplexMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(OneofComplexMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testFieldInt() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasTestOneofFieldInt() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testOneofFieldInt() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasTestOneofComplexField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage &testOneofComplexField() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasTestOneofSecondComplexField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage &testOneofSecondComplexField() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasSecondFieldInt() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 secondFieldInt() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasSecondComplexField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage &secondComplexField() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasSecondSecondComplexField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage &secondSecondComplexField() const;

    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool hasTestSnakeCaseField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testSnakeCaseField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT TestOneofFields testOneofField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT SecondOneofFields secondOneofField() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestFieldInt(QtProtobuf::int32 testFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofFieldInt(QtProtobuf::int32 testOneofFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofComplexField(const ComplexMessage &testOneofComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofComplexField(ComplexMessage &&testOneofComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofSecondComplexField(const ComplexMessage &testOneofSecondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofSecondComplexField(ComplexMessage &&testOneofSecondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondFieldInt(QtProtobuf::int32 secondFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondComplexField(const ComplexMessage &secondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondComplexField(ComplexMessage &&secondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondSecondComplexField(const ComplexMessage &secondSecondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondSecondComplexField(ComplexMessage &&secondSecondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestSnakeCaseField(QtProtobuf::int32 testSnakeCaseField);
    Q_INVOKABLE QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void clearTestOneof();
    Q_INVOKABLE QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void clearSecondOneof();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT bool comparesEqual(const OneofComplexMessage &lhs, const OneofComplexMessage &rhs) noexcept;
    friend bool operator==(const OneofComplexMessage &lhs, const OneofComplexMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const OneofComplexMessage &lhs, const OneofComplexMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testOneofFieldInt_p() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage *testOneofComplexField_p();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage *testOneofSecondComplexField_p();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 secondFieldInt_p() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage *secondComplexField_p();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT ComplexMessage *secondSecondComplexField_p();
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT QtProtobuf::int32 testSnakeCaseField_p() const;
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofFieldInt_p(QtProtobuf::int32 testOneofFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofComplexField_p(ComplexMessage *testOneofComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestOneofSecondComplexField_p(ComplexMessage *testOneofSecondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondFieldInt_p(QtProtobuf::int32 secondFieldInt);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondComplexField_p(ComplexMessage *secondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setSecondSecondComplexField_p(ComplexMessage *secondSecondComplexField);
    QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT void setTestSnakeCaseField_p(QtProtobuf::int32 testSnakeCaseField);
    QExplicitlySharedDataPointer<OneofComplexMessage_QtProtobufData> dptr;
};
namespace OneofComplexMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT)
QML_NAMED_ELEMENT(OneofComplexMessage)

enum class QtProtobufFieldEnum {
    TestFieldIntProtoFieldNumber = 1,
    TestOneofFieldIntProtoFieldNumber = 42,
    TestOneofComplexFieldProtoFieldNumber = 3,
    TestOneofSecondComplexFieldProtoFieldNumber = 4,
    SecondFieldIntProtoFieldNumber = 43,
    SecondComplexFieldProtoFieldNumber = 5,
    SecondSecondComplexFieldProtoFieldNumber = 6,
    TestSnakeCaseFieldProtoFieldNumber = 7,
};
Q_ENUM_NS(QtProtobufFieldEnum)

enum class TestOneofFields : int32_t {
    UninitializedField = QtProtobuf::InvalidFieldNumber,
    TestOneofFieldInt = 42,
    TestOneofComplexField = 3,
    TestOneofSecondComplexField = 4,
};
Q_ENUM_NS(TestOneofFields)

enum class SecondOneofFields : int32_t {
    UninitializedField = QtProtobuf::InvalidFieldNumber,
    SecondFieldInt = 43,
    SecondComplexField = 5,
    SecondSecondComplexField = 6,
    TestSnakeCaseField = 7,
};
Q_ENUM_NS(SecondOneofFields)

} // namespace OneofComplexMessage_QtProtobufNested
} // namespace qtprotobufnamespace::tests

#endif // ONEOFMESSAGES_QPB_H