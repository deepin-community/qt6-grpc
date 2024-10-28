/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef OPTIONAL_QPB_H
#define OPTIONAL_QPB_H

#include "tst_qtprotobufgen_gen_exports.qpb.h"

#include <QtProtobuf/qprotobuflazymessagepointer.h>
#include <QtProtobuf/qprotobufmessage.h>
#include <QtProtobuf/qprotobufobject.h>
#include <QtProtobuf/qprotobufoneof.h>
#include <QtProtobuf/qtprotobuftypes.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qlist.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qshareddata.h>
#include <QtCore/qstring.h>

#include <optional>

namespace qtprotobufnamespace::optional::tests {
class TestStringMessage;
using TestStringMessageRepeated = QList<TestStringMessage>;
namespace TestStringMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace TestStringMessage_QtProtobufNested

class OptionalMessage;
using OptionalMessageRepeated = QList<OptionalMessage>;
namespace OptionalMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace OptionalMessage_QtProtobufNested


class TestStringMessage_QtProtobufData;
class TestStringMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_GEN_EXPORT)
    Q_PROPERTY(QString stringField READ stringField WRITE setStringField SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = TestStringMessage_QtProtobufNested::QtProtobufFieldEnum;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT TestStringMessage();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT ~TestStringMessage();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT TestStringMessage(const TestStringMessage &other);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT TestStringMessage &operator =(const TestStringMessage &other);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT TestStringMessage(TestStringMessage &&other) noexcept;
    TestStringMessage &operator =(TestStringMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(TestStringMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT const QString &stringField() const &;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setStringField(const QString &stringField);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setStringField(QString &&stringField);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool comparesEqual(const TestStringMessage &lhs, const TestStringMessage &rhs) noexcept;
    friend bool operator==(const TestStringMessage &lhs, const TestStringMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const TestStringMessage &lhs, const TestStringMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<TestStringMessage_QtProtobufData> dptr;
};
namespace TestStringMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_GEN_EXPORT)

enum class QtProtobufFieldEnum {
    StringFieldProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace TestStringMessage_QtProtobufNested

class OptionalMessage_QtProtobufData;
class OptionalMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT_EXPORT(QPB_TST_QTPROTOBUFGEN_GEN_EXPORT)
    Q_PROPERTY(QtProtobuf::sint32 testField READ testField WRITE setTestField SCRIPTABLE true)
    Q_PROPERTY(QtProtobuf::sint32 testFieldOpt READ testFieldOpt_p WRITE setTestFieldOpt_p)
    Q_PROPERTY(bool hasTestFieldOpt READ hasTestFieldOpt)
    Q_PROPERTY(bool testFieldBool READ testFieldBool WRITE setTestFieldBool SCRIPTABLE true)
    Q_PROPERTY(bool testFieldBoolOpt READ testFieldBoolOpt_p WRITE setTestFieldBoolOpt_p)
    Q_PROPERTY(bool hasTestFieldBoolOpt READ hasTestFieldBoolOpt)
    Q_PROPERTY(QByteArray testFieldBytes READ testFieldBytes WRITE setTestFieldBytes SCRIPTABLE true)
    Q_PROPERTY(QByteArray testFieldBytesOpt READ testFieldBytesOpt_p WRITE setTestFieldBytesOpt_p)
    Q_PROPERTY(bool hasTestFieldBytesOpt READ hasTestFieldBytesOpt)
    Q_PROPERTY(QString testFieldString READ testFieldString WRITE setTestFieldString SCRIPTABLE true)
    Q_PROPERTY(QString testFieldStringOpt READ testFieldStringOpt_p WRITE setTestFieldStringOpt_p)
    Q_PROPERTY(bool hasTestFieldStringOpt READ hasTestFieldStringOpt)
    Q_PROPERTY(qtprotobufnamespace::optional::tests::TestStringMessage *testFieldMessage_p READ testFieldMessage_p WRITE setTestFieldMessage_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestFieldMessage READ hasTestFieldMessage)
    Q_PROPERTY(qtprotobufnamespace::optional::tests::TestStringMessage *testFieldMessageOpt_p READ testFieldMessageOpt_p WRITE setTestFieldMessageOpt_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestFieldMessageOpt READ hasTestFieldMessageOpt)

public:
    using QtProtobufFieldEnum = OptionalMessage_QtProtobufNested::QtProtobufFieldEnum;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT OptionalMessage();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT ~OptionalMessage();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT OptionalMessage(const OptionalMessage &other);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT OptionalMessage &operator =(const OptionalMessage &other);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT OptionalMessage(OptionalMessage &&other) noexcept;
    OptionalMessage &operator =(OptionalMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(OptionalMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QtProtobuf::sint32 testField() const;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool hasTestFieldOpt() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QtProtobuf::sint32 testFieldOpt() const;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool testFieldBool() const;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool hasTestFieldBoolOpt() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool testFieldBoolOpt() const;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT const QByteArray &testFieldBytes() const &;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool hasTestFieldBytesOpt() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QByteArray testFieldBytesOpt() const;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT const QString &testFieldString() const &;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool hasTestFieldStringOpt() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QString testFieldStringOpt() const;

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool hasTestFieldMessage() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT const TestStringMessage &testFieldMessage() const &;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void clearTestFieldMessage();

    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool hasTestFieldMessageOpt() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT const TestStringMessage &testFieldMessageOpt() const &;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void clearTestFieldMessageOpt();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestField(QtProtobuf::sint32 testField);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldOpt(QtProtobuf::sint32 testFieldOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void clearTestFieldOpt();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBool(bool testFieldBool);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBoolOpt(bool testFieldBoolOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void clearTestFieldBoolOpt();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBytes(const QByteArray &testFieldBytes);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBytes(QByteArray &&testFieldBytes);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBytesOpt(const QByteArray &testFieldBytesOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBytesOpt(QByteArray &&testFieldBytesOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void clearTestFieldBytesOpt();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldString(const QString &testFieldString);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldString(QString &&testFieldString);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldStringOpt(const QString &testFieldStringOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldStringOpt(QString &&testFieldStringOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void clearTestFieldStringOpt();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldMessage(const TestStringMessage &testFieldMessage);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldMessage(TestStringMessage &&testFieldMessage);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldMessageOpt(const TestStringMessage &testFieldMessageOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldMessageOpt(TestStringMessage &&testFieldMessageOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT static void registerTypes();

private:
    friend QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool comparesEqual(const OptionalMessage &lhs, const OptionalMessage &rhs) noexcept;
    friend bool operator==(const OptionalMessage &lhs, const OptionalMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const OptionalMessage &lhs, const OptionalMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QtProtobuf::sint32 testFieldOpt_p() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT bool testFieldBoolOpt_p() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QByteArray testFieldBytesOpt_p() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT QString testFieldStringOpt_p() const;
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT TestStringMessage *testFieldMessage_p();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT TestStringMessage *testFieldMessageOpt_p();
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldOpt_p(QtProtobuf::sint32 testFieldOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBoolOpt_p(bool testFieldBoolOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldBytesOpt_p(QByteArray testFieldBytesOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldStringOpt_p(QString testFieldStringOpt);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldMessage_p(TestStringMessage *testFieldMessage);
    QPB_TST_QTPROTOBUFGEN_GEN_EXPORT void setTestFieldMessageOpt_p(TestStringMessage *testFieldMessageOpt);
    QExplicitlySharedDataPointer<OptionalMessage_QtProtobufData> dptr;
};
namespace OptionalMessage_QtProtobufNested {
Q_NAMESPACE_EXPORT(QPB_TST_QTPROTOBUFGEN_GEN_EXPORT)

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 1,
    TestFieldOptProtoFieldNumber = 2,
    TestFieldBoolProtoFieldNumber = 3,
    TestFieldBoolOptProtoFieldNumber = 4,
    TestFieldBytesProtoFieldNumber = 5,
    TestFieldBytesOptProtoFieldNumber = 6,
    TestFieldStringProtoFieldNumber = 7,
    TestFieldStringOptProtoFieldNumber = 8,
    TestFieldMessageProtoFieldNumber = 9,
    TestFieldMessageOptProtoFieldNumber = 10,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace OptionalMessage_QtProtobufNested
} // namespace qtprotobufnamespace::optional::tests

#endif // OPTIONAL_QPB_H
