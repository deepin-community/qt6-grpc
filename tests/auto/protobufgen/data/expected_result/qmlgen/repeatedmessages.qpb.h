/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */

#ifndef QPROTOBUF_REPEATEDMESSAGES_H
#define QPROTOBUF_REPEATEDMESSAGES_H

#include <QtProtobuf/qprotobufmessage.h>
#include <QtProtobuf/qprotobufobject.h>
#include <QtProtobuf/qprotobuflazymessagepointer.h>

#include <QtQml/qqmlregistration.h>
#include <QtQml/qqmllist.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include "basicmessages.qpb.h"

#include <QtCore/qmetatype.h>
#include <QtCore/qlist.h>
#include <QtCore/qshareddata.h>

#include <memory>

#if defined(QT_SHARED) || !defined(QT_STATIC)
#  if defined(QT_BUILD_TST_QTPROTOBUFGEN_QML_GEN_LIB)
#    define QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT Q_DECL_EXPORT
#  else
#    define QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT
#endif

namespace qtprotobufnamespace::tests {
class RepeatedStringMessage;
using RepeatedStringMessageRepeated = QList<RepeatedStringMessage>;
class RepeatedDoubleMessage;
using RepeatedDoubleMessageRepeated = QList<RepeatedDoubleMessage>;
class RepeatedBytesMessage;
using RepeatedBytesMessageRepeated = QList<RepeatedBytesMessage>;
class RepeatedFloatMessage;
using RepeatedFloatMessageRepeated = QList<RepeatedFloatMessage>;
class RepeatedComplexMessage;
using RepeatedComplexMessageRepeated = QList<RepeatedComplexMessage>;
class RepeatedSIntMessage;
using RepeatedSIntMessageRepeated = QList<RepeatedSIntMessage>;
class RepeatedIntMessage;
using RepeatedIntMessageRepeated = QList<RepeatedIntMessage>;
class RepeatedUIntMessage;
using RepeatedUIntMessageRepeated = QList<RepeatedUIntMessage>;
class RepeatedSInt64Message;
using RepeatedSInt64MessageRepeated = QList<RepeatedSInt64Message>;
class RepeatedInt64Message;
using RepeatedInt64MessageRepeated = QList<RepeatedInt64Message>;
class RepeatedUInt64Message;
using RepeatedUInt64MessageRepeated = QList<RepeatedUInt64Message>;
class RepeatedFixedIntMessage;
using RepeatedFixedIntMessageRepeated = QList<RepeatedFixedIntMessage>;
class RepeatedSFixedIntMessage;
using RepeatedSFixedIntMessageRepeated = QList<RepeatedSFixedIntMessage>;
class RepeatedFixedInt64Message;
using RepeatedFixedInt64MessageRepeated = QList<RepeatedFixedInt64Message>;
class RepeatedSFixedInt64Message;
using RepeatedSFixedInt64MessageRepeated = QList<RepeatedSFixedInt64Message>;
class RepeatedBoolMessage;
using RepeatedBoolMessageRepeated = QList<RepeatedBoolMessage>;

class RepeatedStringMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedStringMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedStringMessage)
    QML_VALUE_TYPE(repeatedStringMessage)
    Q_PROPERTY(QStringList testRepeatedString READ testRepeatedString WRITE setTestRepeatedString SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedStringProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedStringMessage();
    ~RepeatedStringMessage();
    RepeatedStringMessage(const RepeatedStringMessage &other);
    RepeatedStringMessage &operator =(const RepeatedStringMessage &other);
    RepeatedStringMessage(RepeatedStringMessage &&other) noexcept;
    RepeatedStringMessage &operator =(RepeatedStringMessage &&other) noexcept;
    bool operator ==(const RepeatedStringMessage &other) const;
    bool operator !=(const RepeatedStringMessage &other) const;

    QStringList testRepeatedString() const;
    QStringList &testRepeatedString();
    void setTestRepeatedString(const QStringList &testRepeatedString);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedStringMessage_QtProtobufData> dptr;
};

class RepeatedDoubleMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedDoubleMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedDoubleMessage)
    QML_VALUE_TYPE(repeatedDoubleMessage)
    Q_PROPERTY(QtProtobuf::doubleList testRepeatedDouble READ testRepeatedDouble WRITE setTestRepeatedDouble SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedDoubleProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedDoubleMessage();
    ~RepeatedDoubleMessage();
    RepeatedDoubleMessage(const RepeatedDoubleMessage &other);
    RepeatedDoubleMessage &operator =(const RepeatedDoubleMessage &other);
    RepeatedDoubleMessage(RepeatedDoubleMessage &&other) noexcept;
    RepeatedDoubleMessage &operator =(RepeatedDoubleMessage &&other) noexcept;
    bool operator ==(const RepeatedDoubleMessage &other) const;
    bool operator !=(const RepeatedDoubleMessage &other) const;

    QtProtobuf::doubleList testRepeatedDouble() const;
    QtProtobuf::doubleList &testRepeatedDouble();
    void setTestRepeatedDouble(const QtProtobuf::doubleList &testRepeatedDouble);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedDoubleMessage_QtProtobufData> dptr;
};

class RepeatedBytesMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedBytesMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedBytesMessage)
    QML_VALUE_TYPE(repeatedBytesMessage)
    Q_PROPERTY(QByteArrayList testRepeatedBytes READ testRepeatedBytes WRITE setTestRepeatedBytes SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedBytesProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedBytesMessage();
    ~RepeatedBytesMessage();
    RepeatedBytesMessage(const RepeatedBytesMessage &other);
    RepeatedBytesMessage &operator =(const RepeatedBytesMessage &other);
    RepeatedBytesMessage(RepeatedBytesMessage &&other) noexcept;
    RepeatedBytesMessage &operator =(RepeatedBytesMessage &&other) noexcept;
    bool operator ==(const RepeatedBytesMessage &other) const;
    bool operator !=(const RepeatedBytesMessage &other) const;

    QByteArrayList testRepeatedBytes() const;
    QByteArrayList &testRepeatedBytes();
    void setTestRepeatedBytes(const QByteArrayList &testRepeatedBytes);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedBytesMessage_QtProtobufData> dptr;
};

class RepeatedFloatMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedFloatMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedFloatMessage)
    QML_VALUE_TYPE(repeatedFloatMessage)
    Q_PROPERTY(QtProtobuf::floatList testRepeatedFloat READ testRepeatedFloat WRITE setTestRepeatedFloat SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedFloatProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedFloatMessage();
    ~RepeatedFloatMessage();
    RepeatedFloatMessage(const RepeatedFloatMessage &other);
    RepeatedFloatMessage &operator =(const RepeatedFloatMessage &other);
    RepeatedFloatMessage(RepeatedFloatMessage &&other) noexcept;
    RepeatedFloatMessage &operator =(RepeatedFloatMessage &&other) noexcept;
    bool operator ==(const RepeatedFloatMessage &other) const;
    bool operator !=(const RepeatedFloatMessage &other) const;

    QtProtobuf::floatList testRepeatedFloat() const;
    QtProtobuf::floatList &testRepeatedFloat();
    void setTestRepeatedFloat(const QtProtobuf::floatList &testRepeatedFloat);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedFloatMessage_QtProtobufData> dptr;
};

class RepeatedComplexMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedComplexMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedComplexMessage)
    QML_VALUE_TYPE(repeatedComplexMessage)
    Q_PROPERTY(qtprotobufnamespace::tests::ComplexMessageRepeated testRepeatedComplexData READ testRepeatedComplex WRITE setTestRepeatedComplex SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedComplexProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedComplexMessage();
    ~RepeatedComplexMessage();
    RepeatedComplexMessage(const RepeatedComplexMessage &other);
    RepeatedComplexMessage &operator =(const RepeatedComplexMessage &other);
    RepeatedComplexMessage(RepeatedComplexMessage &&other) noexcept;
    RepeatedComplexMessage &operator =(RepeatedComplexMessage &&other) noexcept;
    bool operator ==(const RepeatedComplexMessage &other) const;
    bool operator !=(const RepeatedComplexMessage &other) const;

    ComplexMessageRepeated testRepeatedComplex() const;
    ComplexMessageRepeated &testRepeatedComplex();
    void setTestRepeatedComplex(const ComplexMessageRepeated &testRepeatedComplex);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedComplexMessage_QtProtobufData> dptr;
};

class RepeatedSIntMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedSIntMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedSIntMessage)
    QML_VALUE_TYPE(repeatedSIntMessage)
    Q_PROPERTY(QtProtobuf::sint32List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedSIntMessage();
    ~RepeatedSIntMessage();
    RepeatedSIntMessage(const RepeatedSIntMessage &other);
    RepeatedSIntMessage &operator =(const RepeatedSIntMessage &other);
    RepeatedSIntMessage(RepeatedSIntMessage &&other) noexcept;
    RepeatedSIntMessage &operator =(RepeatedSIntMessage &&other) noexcept;
    bool operator ==(const RepeatedSIntMessage &other) const;
    bool operator !=(const RepeatedSIntMessage &other) const;

    QtProtobuf::sint32List testRepeatedInt() const;
    QtProtobuf::sint32List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::sint32List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedSIntMessage_QtProtobufData> dptr;
};

class RepeatedIntMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedIntMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedIntMessage)
    QML_VALUE_TYPE(repeatedIntMessage)
    Q_PROPERTY(QtProtobuf::int32List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedIntMessage();
    ~RepeatedIntMessage();
    RepeatedIntMessage(const RepeatedIntMessage &other);
    RepeatedIntMessage &operator =(const RepeatedIntMessage &other);
    RepeatedIntMessage(RepeatedIntMessage &&other) noexcept;
    RepeatedIntMessage &operator =(RepeatedIntMessage &&other) noexcept;
    bool operator ==(const RepeatedIntMessage &other) const;
    bool operator !=(const RepeatedIntMessage &other) const;

    QtProtobuf::int32List testRepeatedInt() const;
    QtProtobuf::int32List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::int32List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedIntMessage_QtProtobufData> dptr;
};

class RepeatedUIntMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedUIntMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedUIntMessage)
    QML_VALUE_TYPE(repeatedUIntMessage)
    Q_PROPERTY(QtProtobuf::uint32List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedUIntMessage();
    ~RepeatedUIntMessage();
    RepeatedUIntMessage(const RepeatedUIntMessage &other);
    RepeatedUIntMessage &operator =(const RepeatedUIntMessage &other);
    RepeatedUIntMessage(RepeatedUIntMessage &&other) noexcept;
    RepeatedUIntMessage &operator =(RepeatedUIntMessage &&other) noexcept;
    bool operator ==(const RepeatedUIntMessage &other) const;
    bool operator !=(const RepeatedUIntMessage &other) const;

    QtProtobuf::uint32List testRepeatedInt() const;
    QtProtobuf::uint32List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::uint32List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedUIntMessage_QtProtobufData> dptr;
};

class RepeatedSInt64Message_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedSInt64Message : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedSInt64Message)
    QML_VALUE_TYPE(repeatedSInt64Message)
    Q_PROPERTY(QtProtobuf::sint64List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedSInt64Message();
    ~RepeatedSInt64Message();
    RepeatedSInt64Message(const RepeatedSInt64Message &other);
    RepeatedSInt64Message &operator =(const RepeatedSInt64Message &other);
    RepeatedSInt64Message(RepeatedSInt64Message &&other) noexcept;
    RepeatedSInt64Message &operator =(RepeatedSInt64Message &&other) noexcept;
    bool operator ==(const RepeatedSInt64Message &other) const;
    bool operator !=(const RepeatedSInt64Message &other) const;

    QtProtobuf::sint64List testRepeatedInt() const;
    QtProtobuf::sint64List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::sint64List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedSInt64Message_QtProtobufData> dptr;
};

class RepeatedInt64Message_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedInt64Message : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedInt64Message)
    QML_VALUE_TYPE(repeatedInt64Message)
    Q_PROPERTY(QtProtobuf::int64List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedInt64Message();
    ~RepeatedInt64Message();
    RepeatedInt64Message(const RepeatedInt64Message &other);
    RepeatedInt64Message &operator =(const RepeatedInt64Message &other);
    RepeatedInt64Message(RepeatedInt64Message &&other) noexcept;
    RepeatedInt64Message &operator =(RepeatedInt64Message &&other) noexcept;
    bool operator ==(const RepeatedInt64Message &other) const;
    bool operator !=(const RepeatedInt64Message &other) const;

    QtProtobuf::int64List testRepeatedInt() const;
    QtProtobuf::int64List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::int64List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedInt64Message_QtProtobufData> dptr;
};

class RepeatedUInt64Message_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedUInt64Message : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedUInt64Message)
    QML_VALUE_TYPE(repeatedUInt64Message)
    Q_PROPERTY(QtProtobuf::uint64List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedUInt64Message();
    ~RepeatedUInt64Message();
    RepeatedUInt64Message(const RepeatedUInt64Message &other);
    RepeatedUInt64Message &operator =(const RepeatedUInt64Message &other);
    RepeatedUInt64Message(RepeatedUInt64Message &&other) noexcept;
    RepeatedUInt64Message &operator =(RepeatedUInt64Message &&other) noexcept;
    bool operator ==(const RepeatedUInt64Message &other) const;
    bool operator !=(const RepeatedUInt64Message &other) const;

    QtProtobuf::uint64List testRepeatedInt() const;
    QtProtobuf::uint64List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::uint64List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedUInt64Message_QtProtobufData> dptr;
};

class RepeatedFixedIntMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedFixedIntMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedFixedIntMessage)
    QML_VALUE_TYPE(repeatedFixedIntMessage)
    Q_PROPERTY(QtProtobuf::fixed32List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedFixedIntMessage();
    ~RepeatedFixedIntMessage();
    RepeatedFixedIntMessage(const RepeatedFixedIntMessage &other);
    RepeatedFixedIntMessage &operator =(const RepeatedFixedIntMessage &other);
    RepeatedFixedIntMessage(RepeatedFixedIntMessage &&other) noexcept;
    RepeatedFixedIntMessage &operator =(RepeatedFixedIntMessage &&other) noexcept;
    bool operator ==(const RepeatedFixedIntMessage &other) const;
    bool operator !=(const RepeatedFixedIntMessage &other) const;

    QtProtobuf::fixed32List testRepeatedInt() const;
    QtProtobuf::fixed32List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::fixed32List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedFixedIntMessage_QtProtobufData> dptr;
};

class RepeatedSFixedIntMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedSFixedIntMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedSFixedIntMessage)
    QML_VALUE_TYPE(repeatedSFixedIntMessage)
    Q_PROPERTY(QtProtobuf::sfixed32List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedSFixedIntMessage();
    ~RepeatedSFixedIntMessage();
    RepeatedSFixedIntMessage(const RepeatedSFixedIntMessage &other);
    RepeatedSFixedIntMessage &operator =(const RepeatedSFixedIntMessage &other);
    RepeatedSFixedIntMessage(RepeatedSFixedIntMessage &&other) noexcept;
    RepeatedSFixedIntMessage &operator =(RepeatedSFixedIntMessage &&other) noexcept;
    bool operator ==(const RepeatedSFixedIntMessage &other) const;
    bool operator !=(const RepeatedSFixedIntMessage &other) const;

    QtProtobuf::sfixed32List testRepeatedInt() const;
    QtProtobuf::sfixed32List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::sfixed32List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedSFixedIntMessage_QtProtobufData> dptr;
};

class RepeatedFixedInt64Message_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedFixedInt64Message : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedFixedInt64Message)
    QML_VALUE_TYPE(repeatedFixedInt64Message)
    Q_PROPERTY(QtProtobuf::fixed64List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedFixedInt64Message();
    ~RepeatedFixedInt64Message();
    RepeatedFixedInt64Message(const RepeatedFixedInt64Message &other);
    RepeatedFixedInt64Message &operator =(const RepeatedFixedInt64Message &other);
    RepeatedFixedInt64Message(RepeatedFixedInt64Message &&other) noexcept;
    RepeatedFixedInt64Message &operator =(RepeatedFixedInt64Message &&other) noexcept;
    bool operator ==(const RepeatedFixedInt64Message &other) const;
    bool operator !=(const RepeatedFixedInt64Message &other) const;

    QtProtobuf::fixed64List testRepeatedInt() const;
    QtProtobuf::fixed64List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::fixed64List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedFixedInt64Message_QtProtobufData> dptr;
};

class RepeatedSFixedInt64Message_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedSFixedInt64Message : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedSFixedInt64Message)
    QML_VALUE_TYPE(repeatedSFixedInt64Message)
    Q_PROPERTY(QtProtobuf::sfixed64List testRepeatedInt READ testRepeatedInt WRITE setTestRepeatedInt SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedIntProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedSFixedInt64Message();
    ~RepeatedSFixedInt64Message();
    RepeatedSFixedInt64Message(const RepeatedSFixedInt64Message &other);
    RepeatedSFixedInt64Message &operator =(const RepeatedSFixedInt64Message &other);
    RepeatedSFixedInt64Message(RepeatedSFixedInt64Message &&other) noexcept;
    RepeatedSFixedInt64Message &operator =(RepeatedSFixedInt64Message &&other) noexcept;
    bool operator ==(const RepeatedSFixedInt64Message &other) const;
    bool operator !=(const RepeatedSFixedInt64Message &other) const;

    QtProtobuf::sfixed64List testRepeatedInt() const;
    QtProtobuf::sfixed64List &testRepeatedInt();
    void setTestRepeatedInt(const QtProtobuf::sfixed64List &testRepeatedInt);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedSFixedInt64Message_QtProtobufData> dptr;
};

class RepeatedBoolMessage_QtProtobufData;
class QPB_TST_QTPROTOBUFGEN_QML_GEN_EXPORT RepeatedBoolMessage : public QProtobufMessage
{
    Q_GADGET
    Q_PROTOBUF_OBJECT
    Q_DECLARE_PROTOBUF_SERIALIZERS(RepeatedBoolMessage)
    QML_VALUE_TYPE(repeatedBoolMessage)
    Q_PROPERTY(QtProtobuf::boolList testRepeatedBool READ testRepeatedBool WRITE setTestRepeatedBool SCRIPTABLE true)

public:
    enum QtProtobufFieldEnum {
        TestRepeatedBoolProtoFieldNumber = 1,
    };
    Q_ENUM(QtProtobufFieldEnum)

    RepeatedBoolMessage();
    ~RepeatedBoolMessage();
    RepeatedBoolMessage(const RepeatedBoolMessage &other);
    RepeatedBoolMessage &operator =(const RepeatedBoolMessage &other);
    RepeatedBoolMessage(RepeatedBoolMessage &&other) noexcept;
    RepeatedBoolMessage &operator =(RepeatedBoolMessage &&other) noexcept;
    bool operator ==(const RepeatedBoolMessage &other) const;
    bool operator !=(const RepeatedBoolMessage &other) const;

    QtProtobuf::boolList testRepeatedBool() const;
    QtProtobuf::boolList &testRepeatedBool();
    void setTestRepeatedBool(const QtProtobuf::boolList &testRepeatedBool);
    static void registerTypes();

private:
    QExplicitlySharedDataPointer<RepeatedBoolMessage_QtProtobufData> dptr;
};
} // namespace qtprotobufnamespace::tests

Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedStringMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedDoubleMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedBytesMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedFloatMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedComplexMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedSIntMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedIntMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedUIntMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedSInt64Message)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedInt64Message)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedUInt64Message)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedFixedIntMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedSFixedIntMessage)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedFixedInt64Message)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedSFixedInt64Message)
Q_DECLARE_METATYPE(qtprotobufnamespace::tests::RepeatedBoolMessage)
#endif // QPROTOBUF_REPEATEDMESSAGES_H
