//
//  DDXMLNode+Enums.h
//  XMPPKit
//
//  Created by swift on 12/6/14.
//  Copyright (c) 2014 Georgia Institute of Technology. All rights reserved.
//

#ifndef XMPPKit_DDXMLNode_Enums_h
#define XMPPKit_DDXMLNode_Enums_h

#import <libxml/tree.h>

enum {
    DDXMLInvalidKind                = 0,
    DDXMLDocumentKind               = XML_DOCUMENT_NODE,
    DDXMLElementKind                = XML_ELEMENT_NODE,
    DDXMLAttributeKind              = XML_ATTRIBUTE_NODE,
    DDXMLNamespaceKind              = XML_NAMESPACE_DECL,
    DDXMLProcessingInstructionKind  = XML_PI_NODE,
    DDXMLCommentKind                = XML_COMMENT_NODE,
    DDXMLTextKind                   = XML_TEXT_NODE,
    DDXMLDTDKind                    = XML_DTD_NODE,
    DDXMLEntityDeclarationKind      = XML_ENTITY_DECL,
    DDXMLAttributeDeclarationKind   = XML_ATTRIBUTE_DECL,
    DDXMLElementDeclarationKind     = XML_ELEMENT_DECL,
    DDXMLNotationDeclarationKind    = XML_NOTATION_NODE
};

enum {
    DDXMLNodeOptionsNone            = 0,
    DDXMLNodeExpandEmptyElement     = 1 << 1,
    DDXMLNodeCompactEmptyElement    = 1 << 2,
    DDXMLNodePrettyPrint            = 1 << 17,
};

#endif
