/* This file is autogenerated. DO NOT CHANGE. All changes will be lost */


#include "nopackageexternal.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

#include <cmath>


class SimpleIntMessageExt_QtProtobufData : public QSharedData
{
public:
    SimpleIntMessageExt_QtProtobufData()
        : QSharedData(),
          m_testFieldInt(0)
    {
    }

    SimpleIntMessageExt_QtProtobufData(const SimpleIntMessageExt_QtProtobufData &other)
        : QSharedData(other),
          m_testFieldInt(other.m_testFieldInt)
    {
    }

    QtProtobuf::int32 m_testFieldInt;
};

SimpleIntMessageExt::~SimpleIntMessageExt() = default;

static constexpr struct {
    QtProtobufPrivate::QProtobufPropertyOrdering::Data data;
    const std::array<uint, 5> qt_protobuf_SimpleIntMessageExt_uint_data;
    const char qt_protobuf_SimpleIntMessageExt_char_data[34];
} qt_protobuf_SimpleIntMessageExt_metadata {
    // data
    {
        0, /* = version */
        1, /* = num fields */
        2, /* = field number offset */
        3, /* = property index offset */
        4, /* = field flags offset */
        19, /* = message full name length */
    },
    // uint_data
    {
        // JSON name offsets:
        20, /* = testFieldInt */
        33, /* = end-of-string-marker */
        // Field numbers:
        1, /* = testFieldInt */
        // Property indices:
        0, /* = testFieldInt */
        // Field flags:
        uint(QtProtobufPrivate::FieldFlag::NoFlags), /* = testFieldInt */
    },
    // char_data
    /* metadata char_data: */
    "SimpleIntMessageExt\0" /* = full message name */
    /* field char_data: */
    "testFieldInt\0"
};

const QtProtobufPrivate::QProtobufPropertyOrdering SimpleIntMessageExt::staticPropertyOrdering = {
    &qt_protobuf_SimpleIntMessageExt_metadata.data
};

void SimpleIntMessageExt::registerTypes()
{
    qRegisterMetaType<SimpleIntMessageExt>();
    qRegisterMetaType<SimpleIntMessageExtRepeated>();
}

SimpleIntMessageExt::SimpleIntMessageExt()
    : QProtobufMessage(&SimpleIntMessageExt::staticMetaObject, &SimpleIntMessageExt::staticPropertyOrdering),
      dptr(new SimpleIntMessageExt_QtProtobufData)
{
}

SimpleIntMessageExt::SimpleIntMessageExt(const SimpleIntMessageExt &other)
    = default;
SimpleIntMessageExt &SimpleIntMessageExt::operator =(const SimpleIntMessageExt &other)
{
    SimpleIntMessageExt temp(other);
    swap(temp);
    return *this;
}
SimpleIntMessageExt::SimpleIntMessageExt(SimpleIntMessageExt &&other) noexcept
    = default;
bool comparesEqual(const SimpleIntMessageExt &lhs, const SimpleIntMessageExt &rhs) noexcept
{
    return operator ==(static_cast<const QProtobufMessage&>(lhs),
                       static_cast<const QProtobufMessage&>(rhs))
        && lhs.dptr->m_testFieldInt == rhs.dptr->m_testFieldInt;
}

QtProtobuf::int32 SimpleIntMessageExt::testFieldInt() const
{
    return dptr->m_testFieldInt;
}

void SimpleIntMessageExt::setTestFieldInt(QtProtobuf::int32 testFieldInt)
{
    if (dptr->m_testFieldInt != testFieldInt) {
        dptr.detach();
        dptr->m_testFieldInt = testFieldInt;
    }
}


#include "moc_nopackageexternal.qpb.cpp"
