/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef EXTRANAMESPACE_QPB_H
#define EXTRANAMESPACE_QPB_H

#include <QtProtobuf/qprotobuflazymessagepointer.h>
#include <QtProtobuf/qprotobufmessage.h>
#include <QtProtobuf/qprotobufobject.h>
#include <QtProtobuf/qtprotobuftypes.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qlist.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qshareddata.h>
#include <QtCore/qstring.h>

namespace qtprotobufnamespace::tests {
class EmptyMessage;
using EmptyMessageRepeated = QList<EmptyMessage>;
namespace EmptyMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace EmptyMessage_QtProtobufNested

class SimpleStringMessage;
using SimpleStringMessageRepeated = QList<SimpleStringMessage>;
namespace SimpleStringMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace SimpleStringMessage_QtProtobufNested

class ComplexMessage;
using ComplexMessageRepeated = QList<ComplexMessage>;
namespace ComplexMessage_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace ComplexMessage_QtProtobufNested


class EmptyMessage_QtProtobufData;
class EmptyMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT

public:
    using QtProtobufFieldEnum = EmptyMessage_QtProtobufNested::QtProtobufFieldEnum;
    EmptyMessage();
    ~EmptyMessage();
    EmptyMessage(const EmptyMessage &other);
    EmptyMessage &operator =(const EmptyMessage &other);
    EmptyMessage(EmptyMessage &&other) noexcept;
    EmptyMessage &operator =(EmptyMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(EmptyMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }
    static void registerTypes();

private:
    friend bool comparesEqual(const EmptyMessage &lhs, const EmptyMessage &rhs) noexcept;
    friend bool operator==(const EmptyMessage &lhs, const EmptyMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const EmptyMessage &lhs, const EmptyMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<EmptyMessage_QtProtobufData> dptr;
};
namespace EmptyMessage_QtProtobufNested {
Q_NAMESPACE

} // namespace EmptyMessage_QtProtobufNested

class SimpleStringMessage_QtProtobufData;
class SimpleStringMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT
    Q_PROPERTY(QString testFieldString READ testFieldString WRITE setTestFieldString SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = SimpleStringMessage_QtProtobufNested::QtProtobufFieldEnum;
    SimpleStringMessage();
    ~SimpleStringMessage();
    SimpleStringMessage(const SimpleStringMessage &other);
    SimpleStringMessage &operator =(const SimpleStringMessage &other);
    SimpleStringMessage(SimpleStringMessage &&other) noexcept;
    SimpleStringMessage &operator =(SimpleStringMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(SimpleStringMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    const QString &testFieldString() const &;
    void setTestFieldString(const QString &testFieldString);
    void setTestFieldString(QString &&testFieldString);
    static void registerTypes();

private:
    friend bool comparesEqual(const SimpleStringMessage &lhs, const SimpleStringMessage &rhs) noexcept;
    friend bool operator==(const SimpleStringMessage &lhs, const SimpleStringMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const SimpleStringMessage &lhs, const SimpleStringMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<SimpleStringMessage_QtProtobufData> dptr;
};
namespace SimpleStringMessage_QtProtobufNested {
Q_NAMESPACE

enum class QtProtobufFieldEnum {
    TestFieldStringProtoFieldNumber = 6,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace SimpleStringMessage_QtProtobufNested

class ComplexMessage_QtProtobufData;
class ComplexMessage : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT
    Q_PROPERTY(QtProtobuf::int32 testFieldInt READ testFieldInt WRITE setTestFieldInt SCRIPTABLE true)
    Q_PROPERTY(qtprotobufnamespace::tests::SimpleStringMessage *testComplexField_p READ testComplexField_p WRITE setTestComplexField_p SCRIPTABLE false)
    Q_PROPERTY(bool hasTestComplexField READ hasTestComplexField)

public:
    using QtProtobufFieldEnum = ComplexMessage_QtProtobufNested::QtProtobufFieldEnum;
    ComplexMessage();
    ~ComplexMessage();
    ComplexMessage(const ComplexMessage &other);
    ComplexMessage &operator =(const ComplexMessage &other);
    ComplexMessage(ComplexMessage &&other) noexcept;
    ComplexMessage &operator =(ComplexMessage &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(ComplexMessage &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QtProtobuf::int32 testFieldInt() const;

    bool hasTestComplexField() const;
    const SimpleStringMessage &testComplexField() const &;
    void clearTestComplexField();
    void setTestFieldInt(QtProtobuf::int32 testFieldInt);
    void setTestComplexField(const SimpleStringMessage &testComplexField);
    void setTestComplexField(SimpleStringMessage &&testComplexField);
    static void registerTypes();

private:
    friend bool comparesEqual(const ComplexMessage &lhs, const ComplexMessage &rhs) noexcept;
    friend bool operator==(const ComplexMessage &lhs, const ComplexMessage &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const ComplexMessage &lhs, const ComplexMessage &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    SimpleStringMessage *testComplexField_p();
    void setTestComplexField_p(SimpleStringMessage *testComplexField);
    QExplicitlySharedDataPointer<ComplexMessage_QtProtobufData> dptr;
};
namespace ComplexMessage_QtProtobufNested {
Q_NAMESPACE

enum class QtProtobufFieldEnum {
    TestFieldIntProtoFieldNumber = 1,
    TestComplexFieldProtoFieldNumber = 2,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace ComplexMessage_QtProtobufNested
} // namespace qtprotobufnamespace::tests

#endif // EXTRANAMESPACE_QPB_H
