/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef FIELDINDEXRANGE_QPB_H
#define FIELDINDEXRANGE_QPB_H

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
class FieldIndexTest1Message;
using FieldIndexTest1MessageRepeated = QList<FieldIndexTest1Message>;
namespace FieldIndexTest1Message_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace FieldIndexTest1Message_QtProtobufNested

class FieldIndexTest2Message;
using FieldIndexTest2MessageRepeated = QList<FieldIndexTest2Message>;
namespace FieldIndexTest2Message_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace FieldIndexTest2Message_QtProtobufNested

class FieldIndexTest3Message;
using FieldIndexTest3MessageRepeated = QList<FieldIndexTest3Message>;
namespace FieldIndexTest3Message_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace FieldIndexTest3Message_QtProtobufNested

class FieldIndexTest4Message;
using FieldIndexTest4MessageRepeated = QList<FieldIndexTest4Message>;
namespace FieldIndexTest4Message_QtProtobufNested {
enum class QtProtobufFieldEnum;
} // namespace FieldIndexTest4Message_QtProtobufNested


class FieldIndexTest1Message_QtProtobufData;
class FieldIndexTest1Message : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT
    Q_PROPERTY(QtProtobuf::sint32 testField READ testField WRITE setTestField SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = FieldIndexTest1Message_QtProtobufNested::QtProtobufFieldEnum;
    FieldIndexTest1Message();
    ~FieldIndexTest1Message();
    FieldIndexTest1Message(const FieldIndexTest1Message &other);
    FieldIndexTest1Message &operator =(const FieldIndexTest1Message &other);
    FieldIndexTest1Message(FieldIndexTest1Message &&other) noexcept;
    FieldIndexTest1Message &operator =(FieldIndexTest1Message &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(FieldIndexTest1Message &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QtProtobuf::sint32 testField() const;
    void setTestField(QtProtobuf::sint32 testField);
    static void registerTypes();

private:
    friend bool comparesEqual(const FieldIndexTest1Message &lhs, const FieldIndexTest1Message &rhs) noexcept;
    friend bool operator==(const FieldIndexTest1Message &lhs, const FieldIndexTest1Message &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const FieldIndexTest1Message &lhs, const FieldIndexTest1Message &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<FieldIndexTest1Message_QtProtobufData> dptr;
};
namespace FieldIndexTest1Message_QtProtobufNested {
Q_NAMESPACE

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 31,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace FieldIndexTest1Message_QtProtobufNested

class FieldIndexTest2Message_QtProtobufData;
class FieldIndexTest2Message : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT
    Q_PROPERTY(QtProtobuf::sint32 testField READ testField WRITE setTestField SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = FieldIndexTest2Message_QtProtobufNested::QtProtobufFieldEnum;
    FieldIndexTest2Message();
    ~FieldIndexTest2Message();
    FieldIndexTest2Message(const FieldIndexTest2Message &other);
    FieldIndexTest2Message &operator =(const FieldIndexTest2Message &other);
    FieldIndexTest2Message(FieldIndexTest2Message &&other) noexcept;
    FieldIndexTest2Message &operator =(FieldIndexTest2Message &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(FieldIndexTest2Message &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QtProtobuf::sint32 testField() const;
    void setTestField(QtProtobuf::sint32 testField);
    static void registerTypes();

private:
    friend bool comparesEqual(const FieldIndexTest2Message &lhs, const FieldIndexTest2Message &rhs) noexcept;
    friend bool operator==(const FieldIndexTest2Message &lhs, const FieldIndexTest2Message &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const FieldIndexTest2Message &lhs, const FieldIndexTest2Message &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<FieldIndexTest2Message_QtProtobufData> dptr;
};
namespace FieldIndexTest2Message_QtProtobufNested {
Q_NAMESPACE

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 8191,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace FieldIndexTest2Message_QtProtobufNested

class FieldIndexTest3Message_QtProtobufData;
class FieldIndexTest3Message : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT
    Q_PROPERTY(QtProtobuf::sint32 testField READ testField WRITE setTestField SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = FieldIndexTest3Message_QtProtobufNested::QtProtobufFieldEnum;
    FieldIndexTest3Message();
    ~FieldIndexTest3Message();
    FieldIndexTest3Message(const FieldIndexTest3Message &other);
    FieldIndexTest3Message &operator =(const FieldIndexTest3Message &other);
    FieldIndexTest3Message(FieldIndexTest3Message &&other) noexcept;
    FieldIndexTest3Message &operator =(FieldIndexTest3Message &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(FieldIndexTest3Message &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QtProtobuf::sint32 testField() const;
    void setTestField(QtProtobuf::sint32 testField);
    static void registerTypes();

private:
    friend bool comparesEqual(const FieldIndexTest3Message &lhs, const FieldIndexTest3Message &rhs) noexcept;
    friend bool operator==(const FieldIndexTest3Message &lhs, const FieldIndexTest3Message &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const FieldIndexTest3Message &lhs, const FieldIndexTest3Message &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<FieldIndexTest3Message_QtProtobufData> dptr;
};
namespace FieldIndexTest3Message_QtProtobufNested {
Q_NAMESPACE

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 2097151,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace FieldIndexTest3Message_QtProtobufNested

class FieldIndexTest4Message_QtProtobufData;
class FieldIndexTest4Message : public QProtobufMessage
{
    Q_PROTOBUF_OBJECT
    Q_PROPERTY(QtProtobuf::sint32 testField READ testField WRITE setTestField SCRIPTABLE true)

public:
    using QtProtobufFieldEnum = FieldIndexTest4Message_QtProtobufNested::QtProtobufFieldEnum;
    FieldIndexTest4Message();
    ~FieldIndexTest4Message();
    FieldIndexTest4Message(const FieldIndexTest4Message &other);
    FieldIndexTest4Message &operator =(const FieldIndexTest4Message &other);
    FieldIndexTest4Message(FieldIndexTest4Message &&other) noexcept;
    FieldIndexTest4Message &operator =(FieldIndexTest4Message &&other) noexcept
    {
        swap(other);
        return *this;
    }
    void swap(FieldIndexTest4Message &other) noexcept
    {
        QProtobufMessage::swap(other);
        dptr.swap(other.dptr);
    }

    QtProtobuf::sint32 testField() const;
    void setTestField(QtProtobuf::sint32 testField);
    static void registerTypes();

private:
    friend bool comparesEqual(const FieldIndexTest4Message &lhs, const FieldIndexTest4Message &rhs) noexcept;
    friend bool operator==(const FieldIndexTest4Message &lhs, const FieldIndexTest4Message &rhs) noexcept
    {
        return comparesEqual(lhs, rhs);
    }
    friend bool operator!=(const FieldIndexTest4Message &lhs, const FieldIndexTest4Message &rhs) noexcept
    {
        return !comparesEqual(lhs, rhs);
    }
    QExplicitlySharedDataPointer<FieldIndexTest4Message_QtProtobufData> dptr;
};
namespace FieldIndexTest4Message_QtProtobufNested {
Q_NAMESPACE

enum class QtProtobufFieldEnum {
    TestFieldProtoFieldNumber = 536870911,
};
Q_ENUM_NS(QtProtobufFieldEnum)

} // namespace FieldIndexTest4Message_QtProtobufNested
} // namespace qtprotobufnamespace::tests

#endif // FIELDINDEXRANGE_QPB_H
