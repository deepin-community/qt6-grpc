# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

qt_internal_add_module(Grpc
    SOURCES
        qgrpcoperation.h qgrpcoperation.cpp
        qgrpcoperationcontext.h qgrpcoperationcontext.cpp
        qgrpccallreply.h qgrpccallreply.cpp
        qgrpcstream.h qgrpcstream.cpp
        qgrpcstatus.h qgrpcstatus.cpp
        qabstractgrpcchannel.h qabstractgrpcchannel_p.h qabstractgrpcchannel.cpp
        qgrpchttp2channel.h qgrpchttp2channel.cpp
        qgrpcclientbase.h qgrpcclientbase.cpp
        qgrpccalloptions.h qgrpccalloptions.cpp
        qgrpcchanneloptions.h qgrpcchanneloptions.cpp
        qtgrpcglobal.h
        qtgrpclogging_p.h qtgrpclogging.cpp
        qtgrpcnamespace.h
        qgrpcserializationformat.h qgrpcserializationformat.cpp
    LIBRARIES
        Qt::CorePrivate
        Qt::NetworkPrivate
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Protobuf
        Qt::Network
    QT_LICENSE_ID QT_COMMERCIAL_OR_GPL3
)

qt_internal_add_docs(Grpc
    doc/qtgrpc.qdocconf
)

# TODO: Remove this and fix it in qtbase's qt_internal_find_tool directly
if(QT_HOST_PATH AND Qt6::qtgrpcgen IN_LIST Qt6GrpcTools_TARGETS AND NOT QT_FORCE_BUILD_TOOLS)
    qt_record_extra_qt_main_tools_package_dependency(Grpc GrpcTools "${PROJECT_VERSION}")
endif()
