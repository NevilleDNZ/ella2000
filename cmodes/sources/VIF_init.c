
                 /*  VIF cmodes definition module  */

#include "config.h"

CF_MODULE( VIF_init_init, \
    "$Id: VIF_init.c,v 2.2 1995/03/29 13:05:18 ella Exp $" )


/* 
    ************************************************************************
    This Program is the property of the Secretary of State for Defence
    (United Kingdom) acting through the Defence Research Agency (DRA). Use,
    reproduction, production of amended versions and/or transfer of this
    Program is permitted provided that:

  (a)  this legend be preserved on any such reproduction and amended version,
  (b)  any amended version of this Program be clearly marked to show the
       nature of the amendment and of the name of the amending organisation,
  and
  (c)  any recipient  of such reproduction or amended version accept the
       conditions set out in this legend.

                         Crown Copyright, (c)   1994

                             All rights reserved.

    The Secretary of State for Defence (United Kingdom) acting through his
    Defence Research Agency (DRA) gives no warranty that any element of the
    Software is suitable for any purpose and he shall not be liable for any
    loss or damage including loss or damage resulting in injury or death
    howsoever caused which results from the use of the Software, or any
    developments adaptions modifications translations and enhancements
    thereof.

    The original authors may be contacted via email on ella@dra.hmg.gb or by
    writing to ELLA Office, DRA, St Andrews Road, Malvern, Worcs WR14 3PS, UK.
    ************************************************************************

   ------------------------- Change History ---------------------------
06:01:95   1.001  ELLA    Install in config manage system. 
29:03:95   2.002  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include "VIF_init.h"

extern Table *VIF_InitTable()
{  Table *VIF_table = CreateTable( "VIF", VIF_NSTRUCTS, VIF_NUNIONS );

   AddElement( VIF_ACCESS_TYPE_DECL,
               "Access_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort8( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECSTATIC_VALUE, VIF_SECREGION_PART, ID, 
                      VIF_STATIC_VALUE, VIF_SECVECATTRIBUTE_SPEC),
               Sort8( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_value_type", "has_enclosing_scope", "has_srcpos", 
                      "has_value_constraint", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_ALIAS_DECL,
               "Alias_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort8( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_OBJ_NAME, VIF_SECSTATIC_VALUE, VIF_SECREGION_PART, 
                      ID, VIF_SECFUNC_DECL),
               Sort8( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_aliased_object", "has_value", 
                      "has_enclosing_scope", "has_srcpos", "has_resolution"),
               VIF_table );

   AddElement( VIF_ALLOCATED,
               "Allocated",
               Sort7( VIF_OBJ_NAME, VIF_TARGET, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC, 
                      VIF_NAMED_ENTITY),
               Sort5( INT, VIF_SECCONSTRAINT, VIF_NAME_EXP, VIF_SECITEM, ID),
               Sort5( "has_evaluation_time", "has_constraint", "has_prefix", 
                      "has_base_obj_def", "has_srcpos"),
               VIF_table );

   AddElement( VIF_ALLOCATOR,
               "Allocator",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort5( INT, VIF_SECCONSTRAINT, VIF_STATIC_VALUE, VIF_NAME_EXP, 
                      ID),
               Sort5( "has_evaluation_time", "has_constraint", 
                      "has_value_constraint", "has_init_val", "has_srcpos"),
               VIF_table );

   AddElement( VIF_ARCHITECTURE_BODY,
               "Architecture_body",
               Sort5( VIF_LIBRARY_UNIT_ITEM, VIF_REGION_PART, VIF_USED_BLOCK, 
                      VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort10( ID, VIF_SECENTITY_DECL, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                       VIF_VECITEM, VIF_VECITEM, VIF_SECREGION_PART, 
                       VIF_SECOBJECT_ITEM, VIF_VECITEM, 
                       VIF_SECVECATTRIBUTE_SPEC),
               Sort10( "has_srcpos", "has_entity_name", "has_id", 
                       "has_end_srcpos", "has_decl_s", "has_implicit_decl_s", 
                       "has_enclosing_scope", "has_guard", "has_stm_s", 
                       "has_user_att_s"),
               VIF_table );

   AddElement( VIF_ASCENDING_RANGE_CONSTRAINT,
               "Ascending_range_constraint",
               Sort4( VIF_BOUNDED_FORM_RANGE_CONSTRAINT, 
                      VIF_RANGE_CONSTRAINT_CLASS, VIF_CONSTRAINT, VIF_CHOICE),
               Sort8( INT, INT, VIF_SECTYPE_DECL, VIF_SECTYPE_MARK_DECL, 
                      VIF_SECTYPE_MARK_DECL, INT, VIF_NAME_EXP, VIF_NAME_EXP),
               Sort8( "has_evaluation_time", "has_direction", "is_type", 
                      "is_subtype", "in_enclosing_decl", 
                      "has_null_range_indicator", "has_left_bound", 
                      "has_right_bound"),
               VIF_table );

   AddElement( VIF_ASSERTION_STM,
               "Assertion_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort6( ID, VIF_NAME_EXP, VIF_NAME_EXP, VIF_NAME_EXP, 
                      VIF_LABEL_DECL, VIF_SECREGION_PART),
               Sort6( "has_srcpos", "has_report_exp", "has_severity_exp", 
                      "has_assert_exp", "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_ATTRIBUTE_DECL,
               "Attribute_decl",
               Sort2( VIF_ATTRIBUTE, VIF_ITEM),
               Sort5( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID),
               Sort5( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos"),
               VIF_table );

   AddElement( VIF_ATTRIBUTE_SPEC,
               "Attribute_spec",
               Sort1( VIF_ITEM),
               Sort3( ID, VIF_SECATTRIBUTE_DECL, VIF_NAME_EXP),
               Sort3( "has_srcpos", "has_attribute_def", "has_value_exp"),
               VIF_table );

   AddElement( VIF_BINARY_OPERATION,
               "Binary_operation",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort7( INT, VIF_SECCONSTRAINT, ID, VIF_NAME_EXP, VIF_NAME_EXP, 
                      VIF_STATIC_VALUE, VIF_SECFUNC_DEF),
               Sort7( "has_evaluation_time", "has_constraint", "has_srcpos", 
                      "has_left_exp", "has_right_exp", "has_value", 
                      "has_func_name"),
               VIF_table );

   AddElement( VIF_BINDING_INDICATION,
               "Binding_indication",
               Sort0(),
               Sort6( VIF_VECGENERIC_PARAM_DECL, 
                      VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, 
                      VIF_SYMBOL_ENTRY_IN_TABLE, VIF_SECARCHITECTURE_BODY, 
                      VIF_SECCONFIGURATION_DECL, VIF_SECENTITY_DECL),
               Sort6( "has_generic_assoc_s", "has_port_assoc_s", 
                      "has_bound_body_name", "has_bound_body", 
                      "has_bound_config", "has_bound_entity"),
               VIF_table );

   AddElement( VIF_BIT_STRING_LITERAL,
               "Bit_string_literal",
               Sort6( VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort5( INT, VIF_CONSTRAINT, INT, ID, VIF_STATIC_VALUE),
               Sort5( "has_evaluation_time", "has_constraint", 
                      "has_dimension", "has_srcpos", "has_value"),
               VIF_table );

   AddElement( VIF_BIT_STRING_LITERAL_SUB_AGG,
               "Bit_string_literal_sub_agg",
               Sort6( VIF_SUB_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort4( INT, INT, ID, VIF_STATIC_VALUE),
               Sort4( "has_evaluation_time", "has_dimension", "has_srcpos", 
                      "has_value"),
               VIF_table );

   AddElement( VIF_BLOCK_CONFIG,
               "Block_config",
               Sort2( VIF_CONFIG_ITEM, VIF_REGION_PART),
               Sort7( ID, VIF_SECREGION_PART, VIF_SECUSED_BLOCK, ID, 
                      VIF_VECUSE_CLAUSE, VIF_INDEX_SPEC, VIF_VECCONFIG_ITEM),
               Sort7( "has_srcpos", "has_enclosing_scope", "has_block", 
                      "has_end_srcpos", "has_imported_name_s", 
                      "has_index_spec", "has_next_level_s"),
               VIF_table );

   AddElement( VIF_BLOCK_STM,
               "Block_stm",
               Sort4( VIF_CONCURRENT_STM, VIF_REGION_PART, VIF_STATEMENT, 
                      VIF_USED_BLOCK),
               Sort13( ID, VIF_VECITEM, VIF_VECITEM, ID, 
                       VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, 
                       VIF_VECGENERIC_PARAM_DECL, VIF_SECOBJECT_ITEM, 
                       VIF_NAME_EXP, VIF_LABEL_DECL, 
                       VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, 
                       VIF_VECPORT_DECL, VIF_VECITEM, VIF_SECREGION_PART),
               Sort13( "has_srcpos", "has_decl_s", "has_implicit_decl_s", 
                       "has_end_srcpos", "has_generic_assoc_s", 
                       "has_generic_s", "has_guard", "has_guard_exp", 
                       "has_label", "has_port_assoc_s", "has_port_s", 
                       "has_stm_s", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_CASE_ALTERNATIVE_FOR_DISCRETE,
               "Case_alternative_for_discrete",
               Sort2( VIF_CASE_ALTERNATIVE, VIF_ALTERNATIVE),
               Sort3( VIF_STATIC_VALUE, VIF_VECITEM, VIF_SECCASE_ALTERNATIVE),
               Sort3( "is_associated_up_to", "has_stm_s", "has_same_stm"),
               VIF_table );

   AddElement( VIF_CASE_ALTERNATIVE_FOR_STRING,
               "Case_alternative_for_string",
               Sort2( VIF_CASE_ALTERNATIVE, VIF_ALTERNATIVE),
               Sort3( VIF_STRING_VALUE, VIF_VECITEM, VIF_SECCASE_ALTERNATIVE),
               Sort3( "is_associated_to_str", "has_stm_s", "has_same_stm"),
               VIF_table );

   AddElement( VIF_CASE_STM,
               "Case_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort6( ID, VIF_VECALTERNATIVE, VIF_NAME_EXP, ID, 
                      VIF_LABEL_DECL, VIF_SECREGION_PART),
               Sort6( "has_srcpos", "has_alternative_s", "has_case_exp", 
                      "has_end_srcpos", "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_CHAR_LITERAL_DECL,
               "Char_literal_decl",
               Sort6( VIF_ENUMERATION_LITERAL, VIF_OBJECT_ITEM, VIF_ITEM, 
                      VIF_ITEM, VIF_IMPORTED_ITEM, VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_SECCONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_STATIC_VALUE, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_value", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_CLOSURE,
               "Closure",
               Sort0(),
               Sort1( VIF_VECDESIGN_UNIT),
               Sort1( "has_design_unit_s"),
               VIF_table );

   AddElement( VIF_COMP_INSTANTIATE_STM,
               "Comp_instantiate_stm",
               Sort2( VIF_CONCURRENT_STM, VIF_STATEMENT),
               Sort7( ID, VIF_SECCONFIGURATION_SPEC, VIF_SECCOMPONENT_DECL, 
                      VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, VIF_LABEL_DECL, 
                      VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, 
                      VIF_SECREGION_PART),
               Sort7( "has_srcpos", "has_config_spec", "has_component", 
                      "has_generic_assoc_s", "has_label", "has_port_assoc_s", 
                      "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_COMPLETE_ASSOCIATION_OF_FORMAL,
               "Complete_association_of_formal",
               Sort1( VIF_ASSOCIATIONS),
               Sort2( VIF_ACTUAL_PART, VIF_FORMAL_PART),
               Sort2( "has_actual", "has_formal"),
               VIF_table );

   AddElement( VIF_COMPONENT_CONFIG,
               "Component_config",
               Sort1( VIF_CONFIG_ITEM),
               Sort4( ID, VIF_BINDING_INDICATION, 
                      VIF_SECVECCOMP_INSTANTIATE_STM, VIF_BLOCK_CONFIG),
               Sort4( "has_srcpos", "has_binding", "has_configured_CI_s", 
                      "has_next_level"),
               VIF_table );

   AddElement( VIF_COMPONENT_DECL,
               "Component_decl",
               Sort2( VIF_REGION_PART, VIF_ITEM),
               Sort7( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                      VIF_VECGENERIC_PARAM_DECL, VIF_VECPORT_DECL, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort7( "has_srcpos", "has_enclosing_scope", "has_id", 
                      "has_end_srcpos", "has_generic_s", "has_port_s", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_CONCURRENT_ASSERTION_STM,
               "Concurrent_assertion_stm",
               Sort2( VIF_CONCURRENT_STM, VIF_STATEMENT),
               Sort5( ID, VIF_ASSERTION_STM, VIF_LABEL_DECL, INT, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_assertion_stm", "has_label", 
                      "has_postponed", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_CONCURRENT_PROC_CALL_STM,
               "Concurrent_proc_call_stm",
               Sort2( VIF_CONCURRENT_STM, VIF_STATEMENT),
               Sort5( ID, VIF_PROC_CALL_STM, VIF_LABEL_DECL, INT, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_proc_call_stm", "has_label", 
                      "has_postponed", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_COND_ALTERNATIVE,
               "Cond_alternative",
               Sort1( VIF_ALTERNATIVE),
               Sort2( VIF_NAME_EXP, VIF_VECITEM),
               Sort2( "has_condition", "has_stm_s"),
               VIF_table );

   AddElement( VIF_CONDITIONAL_SIGNAL_ASSIGN_STM,
               "Conditional_signal_assign_stm",
               Sort2( VIF_CONCURRENT_STM, VIF_STATEMENT),
               Sort9( ID, VIF_TARGET, INT, VIF_SECOBJECT_ITEM, 
                      VIF_VECCONDITIONAL_WAVEFORM_ALT, VIF_LABEL_DECL, INT, 
                      VIF_NAME_EXP, VIF_SECREGION_PART),
               Sort9( "has_srcpos", "has_signal_name", "has_transport", 
                      "has_guard", "has_conditional_waveform_s", "has_label", 
                      "has_postponed", "has_reject_time", 
                      "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_CONDITIONAL_WAVEFORM_ALT,
               "Conditional_waveform_alt",
               Sort1( VIF_ALTERNATIVE),
               Sort3( ID, VIF_NAME_EXP, VIF_VECWAVEFORM_ELEM),
               Sort3( "has_srcpos", "has_condition", "has_waveform_s"),
               VIF_table );

   AddElement( VIF_CONFIGURATION_DECL,
               "Configuration_decl",
               Sort4( VIF_LIBRARY_UNIT_ITEM, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort9( ID, VIF_SECENTITY_DECL, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                      VIF_BLOCK_CONFIG, VIF_VECITEM, VIF_VECITEM, 
                      VIF_SECREGION_PART, VIF_SECVECATTRIBUTE_SPEC),
               Sort9( "has_srcpos", "has_entity_name", "has_id", 
                      "has_end_srcpos", "has_config", "has_decl_s", 
                      "has_implicit_decl_s", "has_enclosing_scope", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_CONFIGURATION_SPEC,
               "Configuration_spec",
               Sort1( VIF_ITEM),
               Sort3( ID, VIF_BINDING_INDICATION, 
                      VIF_SECVECCOMP_INSTANTIATE_STM),
               Sort3( "has_srcpos", "has_binding", "has_configured_CI_s"),
               VIF_table );

   AddElement( VIF_CONSTANT_DECL,
               "Constant_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC, 
                      VIF_NAME_EXP, VIF_SECSTATIC_VALUE, 
                      VIF_SECCONSTANT_DECL),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s", 
                      "has_value_exp", "has_value", "has_deferred_decl"),
               VIF_table );

   AddElement( VIF_CONSTRAINED_ARRAY_TYPE_DECL,
               "Constrained_array_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, INT, 
                      VIF_SUBTYPE_INDICATOR, VIF_SECREGION_PART, ID, INT, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_dimension", "has_elem_subtype", 
                      "has_enclosing_scope", "has_srcpos", 
                      "has_access_subelement", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_CONVERSION_FUNCTION_ON_ASSOC,
               "Conversion_function_on_assoc",
               Sort2( VIF_FORMAL_PART, VIF_ACTUAL_PART),
               Sort3( VIF_SECFUNC_DEF, VIF_SECCONSTRAINT, VIF_NAME_EXP),
               Sort3( "has_convert_func_name", "has_constraint", 
                      "has_converted_exp"),
               VIF_table );

   AddElement( VIF_CONVERSION_FUNCTION_ON_PARTIAL_FORMAL,
               "Conversion_function_on_partial_formal",
               Sort1( VIF_PARTIAL_FORMAL_PART),
               Sort3( VIF_SECFUNC_DEF, VIF_SECCONSTRAINT, VIF_SUB_ELEMENT),
               Sort3( "has_convert_func_name", "has_constraint", 
                      "has_converted_subelement"),
               VIF_table );

   AddElement( VIF_DESCENDING_RANGE_CONSTRAINT,
               "Descending_range_constraint",
               Sort4( VIF_BOUNDED_FORM_RANGE_CONSTRAINT, 
                      VIF_RANGE_CONSTRAINT_CLASS, VIF_CONSTRAINT, VIF_CHOICE),
               Sort8( INT, INT, VIF_SECTYPE_DECL, VIF_SECTYPE_MARK_DECL, 
                      VIF_SECTYPE_MARK_DECL, INT, VIF_NAME_EXP, VIF_NAME_EXP),
               Sort8( "has_evaluation_time", "has_direction", "is_type", 
                      "is_subtype", "in_enclosing_decl", 
                      "has_null_range_indicator", "has_left_bound", 
                      "has_right_bound"),
               VIF_table );

   AddElement( VIF_DESIGN_LIBRARY,
               "Design_library",
               Sort2( VIF_REGION_PART, VIF_ITEM),
               Sort3( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE),
               Sort3( "has_srcpos", "has_enclosing_scope", "has_id"),
               VIF_table );

   AddElement( VIF_DESIGN_UNIT,
               "Design_unit",
               Sort1( VIF_IMPORTED_ITEM),
               Sort5( ID, VIF_VECUSE_CLAUSE, VIF_VECDESIGN_LIBRARY, 
                      VIF_LIBRARY_UNIT_ITEM, INT),
               Sort5( "has_srcpos", "has_import_s", "has_referenced_lib_s", 
                      "has_unit", "has_vhdl_kind"),
               VIF_table );

   AddElement( VIF_DISCONNECTION_SPEC,
               "Disconnection_spec",
               Sort1( VIF_ITEM),
               Sort2( ID, VIF_NAME_EXP),
               Sort2( "has_srcpos", "has_value_exp"),
               VIF_table );

   AddElement( VIF_ELEMENT_DECL,
               "Element_decl",
               Sort1( VIF_ITEM),
               Sort7( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECFUNC_DECL, INT),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_resolution", 
                      "has_int_32"),
               VIF_table );

   AddElement( VIF_ENTITY_DECL,
               "Entity_decl",
               Sort4( VIF_LIBRARY_UNIT_ITEM, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort12( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                       VIF_VECITEM, VIF_VECITEM, VIF_VECGENERIC_PARAM_DECL, 
                       VIF_VECPORT_DECL, VIF_VECITEM, VIF_SECVECUSE_CLAUSE, 
                       VIF_SECVECITEM, VIF_SECVECATTRIBUTE_SPEC),
               Sort12( "has_srcpos", "has_enclosing_scope", "has_id", 
                       "has_end_srcpos", "has_decl_s", "has_implicit_decl_s", 
                       "has_generic_s", "has_port_s", "has_stm_s", 
                       "has_use_clause_s", "has_subprogram_decl_s", 
                       "has_user_att_s"),
               VIF_table );

   AddElement( VIF_ENTITY_INSTANTIATE_STM,
               "Entity_instantiate_stm",
               Sort2( VIF_CONCURRENT_STM, VIF_STATEMENT),
               Sort9( ID, VIF_LABEL_DECL, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECARCHITECTURE_BODY, VIF_SECCONFIGURATION_DECL, 
                      VIF_SECENTITY_DECL, 
                      VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, 
                      VIF_VECCOMPLETE_ASSOCIATION_OF_FORMAL, 
                      VIF_SECREGION_PART),
               Sort9( "has_srcpos", "has_label", "has_bound_body_name", 
                      "has_bound_body", "has_bound_config", 
                      "has_bound_entity", "has_generic_assoc_s", 
                      "has_port_assoc_s", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_ENUM_LITERAL_DECL,
               "Enum_literal_decl",
               Sort6( VIF_ENUMERATION_LITERAL, VIF_OBJECT_ITEM, VIF_ITEM, 
                      VIF_ITEM, VIF_IMPORTED_ITEM, VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_SECCONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_STATIC_VALUE, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_value", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_ENUM_TYPE_DECL,
               "Enum_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort8( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, VIF_VECENUMERATION_LITERAL, ID, 
                      INT, VIF_SECVECATTRIBUTE_SPEC),
               Sort8( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_enumeral_s", "has_srcpos", 
                      "is_char_type", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_EXIT_STM,
               "Exit_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort5( ID, VIF_NAME_EXP, VIF_SECLOOP_STM, VIF_LABEL_DECL, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_condition", "has_loop_stm", 
                      "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_FILE_DECL,
               "File_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_NAME_EXP, INT, 
                      VIF_SECVECATTRIBUTE_SPEC, VIF_NAME_EXP),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", 
                      "has_logical_name", "has_mode", "has_user_att_s", 
                      "has_file_mode"),
               VIF_table );

   AddElement( VIF_FILE_TYPE_DECL,
               "File_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort8( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC, 
                      VIF_SECSTATIC_VALUE, VIF_STATIC_VALUE),
               Sort8( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s", 
                      "has_value_type", "has_value_constraint"),
               VIF_table );

   AddElement( VIF_FLOATING_TYPE_DECL,
               "Floating_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort6( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC),
               Sort6( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_FOR_GENERATION,
               "For_generation",
               Sort5( VIF_GENERATION, VIF_OBJECT_ITEM, VIF_SCHEME, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort5( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID),
               Sort5( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos"),
               VIF_table );

   AddElement( VIF_FOR_ITERATION,
               "For_iteration",
               Sort5( VIF_ITERATION, VIF_OBJECT_ITEM, VIF_SCHEME, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort5( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID),
               Sort5( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos"),
               VIF_table );

   AddElement( VIF_FUNC_BODY,
               "Func_body",
               Sort4( VIF_REGION_PART, VIF_SUBP_BODY, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort7( ID, VIF_VECITEM, VIF_VECITEM, ID, VIF_SECREGION_PART, 
                      VIF_SECIMPORTED_ITEM, VIF_VECITEM),
               Sort7( "has_srcpos", "has_decl_s", "has_implicit_decl_s", 
                      "has_end_srcpos", "has_enclosing_scope", "has_name", 
                      "has_stm_s"),
               VIF_table );

   AddElement( VIF_FUNC_CALL,
               "Func_call",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort6( INT, VIF_SECCONSTRAINT, VIF_VECASSOCIATIONS, ID, 
                      VIF_SECFUNC_DEF, VIF_STATIC_VALUE),
               Sort6( "has_evaluation_time", "has_constraint", "has_assoc_s", 
                      "has_srcpos", "has_func_name", "has_value"),
               VIF_table );

   AddElement( VIF_FUNC_DECL,
               "Func_decl",
               Sort4( VIF_FUNC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_VECSUBP_PARAM_DECL, 
                      VIF_SECSUBP_BODY, VIF_SECVECATTRIBUTE_SPEC, INT),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_param_s", 
                      "has_body_decl", "has_user_att_s", "has_pureness"),
               VIF_table );

   AddElement( VIF_GATHERED_PARTIAL_ASSOCIATIONS,
               "Gathered_partial_associations",
               Sort1( VIF_ACTUAL_PART),
               Sort5( INT, VIF_SECCONSTRAINT, 
                      VIF_VECPARTIAL_ASSOCIATION_OF_FORMAL, INT, INT),
               Sort5( "has_dimension", "has_constraint", 
                      "has_gathered_assoc_s", "has_high_bound", 
                      "has_low_bound"),
               VIF_table );

   AddElement( VIF_GENERAL_NAMED_ENTITY,
               "General_named_entity",
               Sort1( VIF_NAMED_ENTITY),
               Sort2( ID, VIF_SECIMPORTED_ITEM),
               Sort2( "has_srcpos", "has_named_entity_def"),
               VIF_table );

   AddElement( VIF_GENERAL_SUBTYPE_DECL,
               "General_subtype_decl",
               Sort4( VIF_SUBTYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort6( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC),
               Sort6( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_GENERAL_USED_OBJECT,
               "General_used_object",
               Sort8( VIF_FORMAL_PART, VIF_OBJ_NAME, VIF_TARGET, 
                      VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC, VIF_NAMED_ENTITY),
               Sort5( INT, VIF_SECCONSTRAINT, VIF_SECOBJECT_ITEM, ID, 
                      VIF_SECSTATIC_VALUE),
               Sort5( "has_evaluation_time", "has_constraint", "has_obj_def", 
                      "has_srcpos", "has_value"),
               VIF_table );

   AddElement( VIF_GENERATE_STM,
               "Generate_stm",
               Sort4( VIF_CONCURRENT_STM, VIF_REGION_PART, VIF_STATEMENT, 
                      VIF_USED_BLOCK),
               Sort9( ID, VIF_VECITEM, VIF_VECITEM, ID, VIF_LABEL_DECL, 
                      VIF_SCHEME, VIF_SECOBJECT_ITEM, VIF_VECITEM, 
                      VIF_SECREGION_PART),
               Sort9( "has_srcpos", "has_decl_s", "has_implicit_decl_s", 
                      "has_end_srcpos", "has_label", "has_scheme", 
                      "has_guard", "has_stm_s", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_GENERIC_PARAM_DECL,
               "Generic_param_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, INT, 
                      VIF_NAME_EXP, VIF_SECREGION_PART, ID, INT, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_class", "has_default", "has_enclosing_scope", 
                      "has_srcpos", "has_mode", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_GROUP_DECL,
               "Group_decl",
               Sort1( VIF_ITEM),
               Sort6( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECGROUP_TEMPLATE_DECL, VIF_VECNAMED_ENTITY, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort6( "has_srcpos", "has_enclosing_scope", "has_id", 
                      "has_group_template", "has_constituent_s", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_GROUP_TEMPLATE_DECL,
               "Group_template_decl",
               Sort1( VIF_ITEM),
               Sort5( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_VECGROUP_TEMPLATE_ENTRY, INT),
               Sort5( "has_srcpos", "has_enclosing_scope", "has_id", 
                      "has_group_template_entry_s", "has_repeat_last_entry"),
               VIF_table );

   AddElement( VIF_GROUP_TEMPLATE_ENTRY,
               "Group_template_entry",
               Sort0(),
               Sort1( INT),
               Sort1( "has_entity_class"),
               VIF_table );

   AddElement( VIF_IF_GENERATION,
               "If_generation",
               Sort2( VIF_GENERATION, VIF_SCHEME),
               Sort1( VIF_NAME_EXP),
               Sort1( "has_condition"),
               VIF_table );

   AddElement( VIF_IF_STM,
               "If_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort5( ID, VIF_VECALTERNATIVE, VIF_LABEL_DECL, ID, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_alternative_s", "has_label", 
                      "has_end_srcpos", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_IMPLICIT_FUNC_DECL,
               "Implicit_func_decl",
               Sort4( VIF_FUNC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, VIF_VECSUBP_PARAM_DECL, 
                      VIF_SECVECATTRIBUTE_SPEC, INT),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_param_s", "has_user_att_s", 
                      "has_pureness"),
               VIF_table );

   AddElement( VIF_IMPLICIT_OPERATOR_DECL,
               "Implicit_operator_decl",
               Sort4( VIF_FUNC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort8( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, INT, VIF_VECSUBP_PARAM_DECL, 
                      VIF_SECVECATTRIBUTE_SPEC, INT),
               Sort8( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_operator", "has_param_s", 
                      "has_user_att_s", "has_pureness"),
               VIF_table );

   AddElement( VIF_IMPLICIT_PROC_DECL,
               "Implicit_proc_decl",
               Sort4( VIF_PROC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort5( INT, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_VECSUBP_PARAM_DECL, VIF_SECVECATTRIBUTE_SPEC),
               Sort5( "has_evaluation_time", "has_enclosing_scope", "has_id", 
                      "has_param_s", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_INCOMPLETE_TYPE_DECL,
               "Incomplete_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort3( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE),
               Sort3( "has_srcpos", "has_enclosing_scope", "has_id"),
               VIF_table );

   AddElement( VIF_INDEX_CONSTRAINT,
               "Index_constraint",
               Sort1( VIF_CONSTRAINT),
               Sort5( INT, VIF_VECSUBTYPE_INDICATOR, VIF_SECTYPE_DECL, 
                      VIF_SECTYPE_MARK_DECL, VIF_SECTYPE_MARK_DECL),
               Sort5( "has_evaluation_time", "has_index_range_s", "is_type", 
                      "is_subtype", "in_enclosing_decl"),
               VIF_table );

   AddElement( VIF_INDEXED,
               "Indexed",
               Sort7( VIF_OBJ_NAME, VIF_TARGET, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC, 
                      VIF_NAMED_ENTITY),
               Sort6( INT, VIF_SECCONSTRAINT, VIF_SECITEM, ID, 
                      VIF_VECNAME_EXP, VIF_NAME_EXP),
               Sort6( "has_evaluation_time", "has_constraint", 
                      "has_base_obj_def", "has_srcpos", "has_index_exp_s", 
                      "has_prefix"),
               VIF_table );

   AddElement( VIF_INDEXED_ATTRIBUTE_REF,
               "Indexed_attribute_ref",
               Sort5( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC, VIF_NAMED_ENTITY),
               Sort7( INT, VIF_SECCONSTRAINT, VIF_SECATTRIBUTE, ID, 
                      VIF_NAME_EXP, VIF_NAMED_ENTITY, VIF_STATIC_VALUE),
               Sort7( "has_evaluation_time", "has_constraint", 
                      "has_attribute", "has_srcpos", "has_index", 
                      "has_attribute_prefix", "has_value"),
               VIF_table );

   AddElement( VIF_INDEXED_FUNC_CALL,
               "Indexed_func_call",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort3( ID, VIF_SECCONSTRAINT, VIF_VECNAME_EXP),
               Sort3( "has_srcpos", "has_constraint", "has_index_exp_s"),
               VIF_table );

   AddElement( VIF_INDEXED_FUNC_DECL,
               "Indexed_func_decl",
               Sort4( VIF_FUNC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort1( VIF_SECFUNC_DEF),
               Sort1( "has_func_name"),
               VIF_table );

   AddElement( VIF_INT_32_RANGE,
               "Int_32_range",
               Sort3( VIF_SUB_ELEMENT, VIF_PARTIAL_FORMAL_PART, VIF_CHOICE),
               Sort3( INT, INT, INT),
               Sort3( "has_direction", "has_low_bound", "has_high_bound"),
               VIF_table );

   AddElement( VIF_INT_32_VALUE,
               "Int_32_value",
               Sort4( VIF_STATIC_VALUE, VIF_SUB_ELEMENT, 
                      VIF_PARTIAL_FORMAL_PART, VIF_CHOICE),
               Sort1( INT),
               Sort1( "has_int_32"),
               VIF_table );

   AddElement( VIF_INT_64_VALUE,
               "Int_64_value",
               Sort1( VIF_STATIC_VALUE),
               Sort1( INT),
               Sort1( "has_int_64"),
               VIF_table );

   AddElement( VIF_INTEGER_TYPE_DECL,
               "Integer_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort6( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC),
               Sort6( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_LABEL_DECL,
               "Label_decl",
               Sort1( VIF_ITEM),
               Sort5( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECLABEL_DECL, VIF_SECVECATTRIBUTE_SPEC),
               Sort5( "has_srcpos", "has_enclosing_scope", "has_id", 
                      "has_labeled_stm", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_LOOP_STM,
               "Loop_stm",
               Sort3( VIF_REGION_PART, VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort6( ID, VIF_LABEL_DECL, VIF_SCHEME, ID, VIF_VECITEM, 
                      VIF_SECREGION_PART),
               Sort6( "has_srcpos", "has_label", "has_scheme", 
                      "has_end_srcpos", "has_stm_s", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_NAMED_AGG_ASSOC,
               "Named_agg_assoc",
               Sort2( VIF_ASSOCIATIONS, VIF_AGG_ASSOC),
               Sort2( VIF_NAME_EXP, VIF_STATIC_VALUE),
               Sort2( "has_associated_exp", "is_associated_up_to"),
               VIF_table );

   AddElement( VIF_NAMED_ARRAY_AGG,
               "Named_array_agg",
               Sort7( VIF_TARGET, VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, 
                      VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort5( INT, VIF_CONSTRAINT, VIF_VECASSOCIATIONS, ID, INT),
               Sort5( "has_evaluation_time", "has_constraint", "has_assoc_s", 
                      "has_srcpos", "has_dimension"),
               VIF_table );

   AddElement( VIF_NAMED_SUB_AGG,
               "Named_sub_agg",
               Sort6( VIF_SUB_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort4( INT, VIF_VECASSOCIATIONS, INT, ID),
               Sort4( "has_evaluation_time", "has_assoc_s", "has_dimension", 
                      "has_srcpos"),
               VIF_table );

   AddElement( VIF_NEXT_STM,
               "Next_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort5( ID, VIF_NAME_EXP, VIF_SECLOOP_STM, VIF_LABEL_DECL, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_condition", "has_loop_stm", 
                      "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_NON_CONSTRAINT,
               "Non_constraint",
               Sort1( VIF_CONSTRAINT),
               Sort4( INT, VIF_SECTYPE_MARK_DECL, VIF_SECTYPE_DECL, 
                      VIF_SECTYPE_MARK_DECL),
               Sort4( "has_evaluation_time", "in_enclosing_decl", "is_type", 
                      "is_subtype"),
               VIF_table );

   AddElement( VIF_NON_STATIC_ARRAY_AGG,
               "Non_static_array_agg",
               Sort6( VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort6( INT, VIF_SECCONSTRAINT, VIF_NAME_EXP, VIF_STATIC_VALUE, 
                      INT, ID),
               Sort6( "has_evaluation_time", "has_constraint", 
                      "has_associated_exp", "is_associated_to", 
                      "has_dimension", "has_srcpos"),
               VIF_table );

   AddElement( VIF_NON_STATIC_SUB_AGG,
               "Non_static_sub_agg",
               Sort6( VIF_SUB_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort5( INT, VIF_NAME_EXP, VIF_STATIC_VALUE, INT, ID),
               Sort5( "has_evaluation_time", "has_associated_exp", 
                      "is_associated_to", "has_dimension", "has_srcpos"),
               VIF_table );

   AddElement( VIF_NULL_ARRAY_AGG,
               "Null_array_agg",
               Sort6( VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort6( INT, VIF_SECCONSTRAINT, VIF_NAME_EXP, VIF_STATIC_VALUE, 
                      INT, ID),
               Sort6( "has_evaluation_time", "has_constraint", 
                      "has_associated_exp", "is_associated_to", 
                      "has_dimension", "has_srcpos"),
               VIF_table );

   AddElement( VIF_NULL_LITERAL,
               "Null_literal",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort3( INT, VIF_SECCONSTRAINT, ID),
               Sort3( "has_evaluation_time", "has_constraint", "has_srcpos"),
               VIF_table );

   AddElement( VIF_NULL_STM,
               "Null_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort3( ID, VIF_LABEL_DECL, VIF_SECREGION_PART),
               Sort3( "has_srcpos", "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_NULL_SUB_AGG,
               "Null_sub_agg",
               Sort6( VIF_SUB_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort5( INT, VIF_NAME_EXP, VIF_STATIC_VALUE, INT, ID),
               Sort5( "has_evaluation_time", "has_associated_exp", 
                      "is_associated_to", "has_dimension", "has_srcpos"),
               VIF_table );

   AddElement( VIF_NULL_WAVEFORM_ELEMENT,
               "Null_waveform_element",
               Sort1( VIF_WAVEFORM_ELEM),
               Sort1( VIF_NAME_EXP),
               Sort1( "has_time_exp"),
               VIF_table );

   AddElement( VIF_NUMERIC_VALUE,
               "Numeric_value",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort4( INT, VIF_SECCONSTRAINT, ID, VIF_STATIC_VALUE),
               Sort4( "has_evaluation_time", "has_constraint", "has_srcpos", 
                      "has_value"),
               VIF_table );

   AddElement( VIF_OPERATOR_DECL,
               "Operator_decl",
               Sort4( VIF_FUNC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort10( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                       VIF_SECREGION_PART, ID, INT, VIF_VECSUBP_PARAM_DECL, 
                       VIF_SECSUBP_BODY, VIF_SECVECATTRIBUTE_SPEC, INT),
               Sort10( "has_evaluation_time", "has_constraint", "has_id", 
                       "has_enclosing_scope", "has_srcpos", "has_operator", 
                       "has_param_s", "has_body_decl", "has_user_att_s", 
                       "has_pureness"),
               VIF_table );

   AddElement( VIF_OTHERS_AGG_ASSOC,
               "Others_agg_assoc",
               Sort2( VIF_ASSOCIATIONS, VIF_AGG_ASSOC),
               Sort1( VIF_NAME_EXP),
               Sort1( "has_associated_exp"),
               VIF_table );

   AddElement( VIF_OTHERS_CASE_ALTERNATIVE,
               "Others_case_alternative",
               Sort2( VIF_CASE_ALTERNATIVE, VIF_ALTERNATIVE),
               Sort1( VIF_VECITEM),
               Sort1( "has_stm_s"),
               VIF_table );

   AddElement( VIF_OTHERS_SELECTED_WAVEFORM_ALT,
               "Others_selected_waveform_alt",
               Sort2( VIF_SELECTED_ALTERNATIVE, VIF_ALTERNATIVE),
               Sort1( VIF_VECWAVEFORM_ELEM),
               Sort1( "has_waveform_s"),
               VIF_table );

   AddElement( VIF_PACKAGE_BODY,
               "Package_body",
               Sort4( VIF_LIBRARY_UNIT_ITEM, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort7( ID, VIF_SECIMPORTED_ITEM, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      ID, VIF_VECITEM, VIF_VECITEM, VIF_SECREGION_PART),
               Sort7( "has_srcpos", "has_name", "has_id", "has_end_srcpos", 
                      "has_decl_s", "has_implicit_decl_s", 
                      "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_PACKAGE_DECL,
               "Package_decl",
               Sort4( VIF_LIBRARY_UNIT_ITEM, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort11( ID, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                       VIF_VECITEM, VIF_VECITEM, VIF_SECVECATTRIBUTE_SPEC, 
                       VIF_SECVECCONSTANT_DECL, VIF_SECVECTYPE_MARK_DECL, 
                       VIF_SECVECUSE_CLAUSE, VIF_SECVECITEM),
               Sort11( "has_srcpos", "has_enclosing_scope", "has_id", 
                       "has_end_srcpos", "has_decl_s", "has_implicit_decl_s", 
                       "has_user_att_s", "has_deferred_constant_s", 
                       "has_type_decl_s", "has_use_clause_s", 
                       "has_subprogram_decl_s"),
               VIF_table );

   AddElement( VIF_PARTIAL_ASSOCIATION_OF_FORMAL,
               "Partial_association_of_formal",
               Sort1( VIF_ASSOCIATIONS),
               Sort2( VIF_ACTUAL_PART, VIF_PARTIAL_FORMAL_PART),
               Sort2( "has_actual", "has_formal_subelement"),
               VIF_table );

   AddElement( VIF_PHY_UNIT_DECL,
               "Phy_unit_decl",
               Sort1( VIF_ITEM),
               Sort7( INT, VIF_SECCONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_STATIC_VALUE, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_value", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_PHYSICAL_TYPE_DECL,
               "Physical_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                      VIF_PHY_UNIT_DECL, VIF_SECREGION_PART, ID, 
                      VIF_VECPHY_UNIT_DECL, VIF_SECVECATTRIBUTE_SPEC),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_end_srcpos", "has_base", "has_enclosing_scope", 
                      "has_srcpos", "has_secondary_s", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_PHYSICAL_VALUE,
               "Physical_value",
               Sort1( VIF_STATIC_VALUE),
               Sort2( VIF_STATIC_VALUE, VIF_SECPHY_UNIT_DECL),
               Sort2( "has_value", "has_base"),
               VIF_table );

   AddElement( VIF_PORT_DECL,
               "Port_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort12( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, INT, 
                       VIF_NAME_EXP, VIF_SIGNAL_SPECS, VIF_SECREGION_PART, 
                       ID, INT, INT, VIF_SECFUNC_DECL, 
                       VIF_SECVECATTRIBUTE_SPEC),
               Sort12( "has_evaluation_time", "has_constraint", "has_id", 
                       "has_class", "has_default", "has_disconnect_specs", 
                       "has_enclosing_scope", "has_srcpos", 
                       "has_guarded_kind", "has_mode", "has_resolution", 
                       "has_user_att_s"),
               VIF_table );

   AddElement( VIF_POSITIONAL_AGG_ASSOC,
               "Positional_agg_assoc",
               Sort2( VIF_ASSOCIATIONS, VIF_AGG_ASSOC),
               Sort1( VIF_NAME_EXP),
               Sort1( "has_associated_exp"),
               VIF_table );

   AddElement( VIF_POSITIONAL_ARRAY_AGG,
               "Positional_array_agg",
               Sort7( VIF_TARGET, VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, 
                      VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort5( INT, VIF_CONSTRAINT, VIF_VECASSOCIATIONS, INT, ID),
               Sort5( "has_evaluation_time", "has_constraint", "has_assoc_s", 
                      "has_dimension", "has_srcpos"),
               VIF_table );

   AddElement( VIF_POSITIONAL_SUB_AGG,
               "Positional_sub_agg",
               Sort6( VIF_SUB_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort4( INT, VIF_VECASSOCIATIONS, INT, ID),
               Sort4( "has_evaluation_time", "has_assoc_s", "has_dimension", 
                      "has_srcpos"),
               VIF_table );

   AddElement( VIF_PRE_DEFINED_ATT_DECL,
               "Pre_defined_att_decl",
               Sort2( VIF_ATTRIBUTE, VIF_ITEM),
               Sort4( INT, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      INT),
               Sort4( "has_evaluation_time", "has_enclosing_scope", "has_id", 
                      "has_attribute_number"),
               VIF_table );

   AddElement( VIF_PROC_BODY,
               "Proc_body",
               Sort4( VIF_REGION_PART, VIF_SUBP_BODY, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort7( ID, VIF_VECITEM, VIF_VECITEM, ID, VIF_SECREGION_PART, 
                      VIF_SECIMPORTED_ITEM, VIF_VECITEM),
               Sort7( "has_srcpos", "has_decl_s", "has_implicit_decl_s", 
                      "has_end_srcpos", "has_enclosing_scope", "has_name", 
                      "has_stm_s"),
               VIF_table );

   AddElement( VIF_PROC_CALL_STM,
               "Proc_call_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort5( ID, VIF_VECASSOCIATIONS, VIF_SECPROC_DEF, 
                      VIF_LABEL_DECL, VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_assoc_s", "has_proc_name", 
                      "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_PROC_DECL,
               "Proc_decl",
               Sort4( VIF_PROC_DEF, VIF_REGION_PART, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_SECREGION_PART, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                      VIF_VECSUBP_PARAM_DECL, VIF_SECSUBP_BODY, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort7( "has_evaluation_time", "has_enclosing_scope", "has_id", 
                      "has_srcpos", "has_param_s", "has_body_decl", 
                      "has_user_att_s"),
               VIF_table );

   AddElement( VIF_PROCESS_STM,
               "Process_stm",
               Sort3( VIF_CONCURRENT_STM, VIF_REGION_PART, VIF_STATEMENT),
               Sort9( ID, VIF_VECITEM, VIF_VECITEM, ID, VIF_VECNAME_EXP, 
                      VIF_LABEL_DECL, VIF_VECITEM, VIF_SECREGION_PART, INT),
               Sort9( "has_srcpos", "has_decl_s", "has_implicit_decl_s", 
                      "has_end_srcpos", "has_sensitivity_s", "has_label", 
                      "has_stm_s", "has_enclosing_scope", "has_postponed"),
               VIF_table );

   AddElement( VIF_QUALIFIED,
               "Qualified",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort5( INT, VIF_SECCONSTRAINT, ID, VIF_NAME_EXP, 
                      VIF_SECSTATIC_VALUE),
               Sort5( "has_evaluation_time", "has_constraint", "has_srcpos", 
                      "has_qualified_exp", "has_value"),
               VIF_table );

   AddElement( VIF_RANGE_ATTRIBUTE_CONSTRAINT,
               "Range_attribute_constraint",
               Sort4( VIF_ATTRIBUTE_FORM_RANGE_CONSTRAINT, 
                      VIF_RANGE_CONSTRAINT_CLASS, VIF_CONSTRAINT, VIF_CHOICE),
               Sort11( INT, VIF_SECCONSTRAINT, VIF_SECTYPE_DECL, 
                       VIF_SECTYPE_MARK_DECL, VIF_SECTYPE_MARK_DECL, INT, 
                       VIF_NAME_EXP, VIF_SECNAME_EXP, INT, VIF_NAMED_ENTITY, 
                       VIF_SECNAME_EXP),
               Sort11( "has_evaluation_time", "has_constraint", "is_type", 
                       "is_subtype", "in_enclosing_decl", "has_direction", 
                       "has_index", "has_left_bound", 
                       "has_null_range_indicator", "has_attribute_prefix", 
                       "has_right_bound"),
               VIF_table );

   AddElement( VIF_REAL_VALUE,
               "Real_value",
               Sort1( VIF_STATIC_VALUE),
               Sort1( INT),
               Sort1( "has_real"),
               VIF_table );

   AddElement( VIF_RECORD_AGG,
               "Record_agg",
               Sort7( VIF_TARGET, VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, 
                      VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort4( INT, VIF_SECCONSTRAINT, VIF_VECASSOCIATIONS, ID),
               Sort4( "has_evaluation_time", "has_constraint", "has_assoc_s", 
                      "has_srcpos"),
               VIF_table );

   AddElement( VIF_RECORD_TYPE_DECL,
               "Record_type_decl",
               Sort5( VIF_REGION_PART, VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, 
                      VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort9( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, ID, 
                      VIF_VECELEMENT_DECL, VIF_SECREGION_PART, ID, INT, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort9( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_end_srcpos", "has_element_s", 
                      "has_enclosing_scope", "has_srcpos", 
                      "has_access_subelement", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_REPORT_STM,
               "Report_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort5( ID, VIF_NAME_EXP, VIF_NAME_EXP, VIF_LABEL_DECL, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_report_exp", "has_severity_exp", 
                      "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_RESOLVABLE_SUBTYPE_DECL,
               "Resolvable_subtype_decl",
               Sort4( VIF_SUBTYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECFUNC_DECL, 
                      VIF_SECVECATTRIBUTE_SPEC),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", 
                      "has_resolve_func", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_RETURN_STM,
               "Return_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort4( ID, VIF_NAME_EXP, VIF_LABEL_DECL, VIF_SECREGION_PART),
               Sort4( "has_srcpos", "has_return_exp", "has_label", 
                      "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_REVERSE_RANGE_ATTRIBUTE_CONSTRAINT,
               "Reverse_range_attribute_constraint",
               Sort4( VIF_ATTRIBUTE_FORM_RANGE_CONSTRAINT, 
                      VIF_RANGE_CONSTRAINT_CLASS, VIF_CONSTRAINT, VIF_CHOICE),
               Sort11( INT, VIF_SECCONSTRAINT, VIF_SECTYPE_DECL, 
                       VIF_SECTYPE_MARK_DECL, VIF_SECTYPE_MARK_DECL, INT, 
                       VIF_NAME_EXP, VIF_SECNAME_EXP, INT, VIF_NAMED_ENTITY, 
                       VIF_SECNAME_EXP),
               Sort11( "has_evaluation_time", "has_constraint", "is_type", 
                       "is_subtype", "in_enclosing_decl", "has_direction", 
                       "has_index", "has_left_bound", 
                       "has_null_range_indicator", "has_attribute_prefix", 
                       "has_right_bound"),
               VIF_table );

   AddElement( VIF_SELECTED_ELEMENT,
               "Selected_element",
               Sort7( VIF_OBJ_NAME, VIF_TARGET, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC, 
                      VIF_NAMED_ENTITY),
               Sort6( INT, VIF_SECCONSTRAINT, VIF_SECITEM, ID, VIF_NAME_EXP, 
                      VIF_SECELEMENT_DECL),
               Sort6( "has_evaluation_time", "has_constraint", 
                      "has_base_obj_def", "has_srcpos", "has_prefix", 
                      "has_suffix"),
               VIF_table );

   AddElement( VIF_SELECTED_SIGNAL_ASSIGN_STM,
               "Selected_signal_assign_stm",
               Sort2( VIF_CONCURRENT_STM, VIF_STATEMENT),
               Sort10( ID, VIF_TARGET, INT, VIF_SECOBJECT_ITEM, VIF_NAME_EXP, 
                       VIF_VECSELECTED_ALTERNATIVE, VIF_LABEL_DECL, INT, 
                       VIF_NAME_EXP, VIF_SECREGION_PART),
               Sort10( "has_srcpos", "has_signal_name", "has_transport", 
                       "has_guard", "has_select_exp", 
                       "has_selected_waveform_s", "has_label", 
                       "has_postponed", "has_reject_time", 
                       "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_SELECTED_WAVEFORM_ALT_FOR_DISCRETE,
               "Selected_waveform_alt_for_discrete",
               Sort2( VIF_SELECTED_ALTERNATIVE, VIF_ALTERNATIVE),
               Sort3( VIF_STATIC_VALUE, VIF_VECWAVEFORM_ELEM, 
                      VIF_SECSELECTED_ALTERNATIVE),
               Sort3( "is_associated_up_to", "has_waveform_s", 
                      "has_same_waveform"),
               VIF_table );

   AddElement( VIF_SELECTED_WAVEFORM_ALT_FOR_STRING,
               "Selected_waveform_alt_for_string",
               Sort2( VIF_SELECTED_ALTERNATIVE, VIF_ALTERNATIVE),
               Sort3( VIF_STRING_VALUE, VIF_VECWAVEFORM_ELEM, 
                      VIF_SECSELECTED_ALTERNATIVE),
               Sort3( "is_associated_to_str", "has_waveform_s", 
                      "has_same_waveform"),
               VIF_table );

   AddElement( VIF_SHARED_VARIABLE_DECL,
               "Shared_variable_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC, 
                      VIF_NAME_EXP),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s", 
                      "has_value_exp"),
               VIF_table );

   AddElement( VIF_SIGNAL_ASSIGN_STM,
               "Signal_assign_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort7( ID, VIF_TARGET, INT, VIF_VECWAVEFORM_ELEM, 
                      VIF_LABEL_DECL, VIF_NAME_EXP, VIF_SECREGION_PART),
               Sort7( "has_srcpos", "has_signal_name", "has_transport", 
                      "has_waveform_s", "has_label", "has_reject_time", 
                      "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_SIGNAL_DECL,
               "Signal_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort10( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                       VIF_SIGNAL_SPECS, VIF_SECREGION_PART, ID, INT, 
                       VIF_SECFUNC_DECL, VIF_SECVECATTRIBUTE_SPEC, 
                       VIF_NAME_EXP),
               Sort10( "has_evaluation_time", "has_constraint", "has_id", 
                       "has_disconnect_specs", "has_enclosing_scope", 
                       "has_srcpos", "has_guarded_kind", "has_resolution", 
                       "has_user_att_s", "has_value_exp"),
               VIF_table );

   AddElement( VIF_SIGNAL_DISCONNECT_SPEC,
               "Signal_disconnect_spec",
               Sort1( VIF_SIGNAL_SPECS),
               Sort1( VIF_SECDISCONNECTION_SPEC),
               Sort1( "has_disconnection_spec"),
               VIF_table );

   AddElement( VIF_SIGNAL_SPEC_AGG,
               "Signal_spec_agg",
               Sort1( VIF_SIGNAL_SPECS),
               Sort1( VIF_VECSIGNAL_SPEC_ASSOC),
               Sort1( "has_spec_s"),
               VIF_table );

   AddElement( VIF_SIGNAL_SPEC_ASSOC,
               "Signal_spec_assoc",
               Sort0(),
               Sort2( VIF_SIGNAL_SPECS, VIF_CHOICE),
               Sort2( "has_associated_spec", "is_associated_to"),
               VIF_table );

   AddElement( VIF_SIMPLE_ATTRIBUTE_REF,
               "Simple_attribute_ref",
               Sort5( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC, VIF_NAMED_ENTITY),
               Sort6( INT, VIF_SECCONSTRAINT, VIF_SECATTRIBUTE, ID, 
                      VIF_NAMED_ENTITY, VIF_SECSTATIC_VALUE),
               Sort6( "has_evaluation_time", "has_constraint", 
                      "has_attribute", "has_srcpos", "has_attribute_prefix", 
                      "has_value"),
               VIF_table );

   AddElement( VIF_SLICE,
               "Slice",
               Sort7( VIF_OBJ_NAME, VIF_TARGET, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC, 
                      VIF_NAMED_ENTITY),
               Sort6( INT, VIF_CONSTRAINT, VIF_SECITEM, ID, 
                      VIF_SECSUBTYPE_INDICATOR, VIF_NAME_EXP),
               Sort6( "has_evaluation_time", "has_constraint", 
                      "has_base_obj_def", "has_srcpos", "has_index_range", 
                      "has_prefix"),
               VIF_table );

   AddElement( VIF_STRING_LITERAL,
               "String_literal",
               Sort6( VIF_TOP_LEVEL_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort5( INT, VIF_CONSTRAINT, INT, ID, VIF_STATIC_VALUE),
               Sort5( "has_evaluation_time", "has_constraint", 
                      "has_dimension", "has_srcpos", "has_value"),
               VIF_table );

   AddElement( VIF_STRING_LITERAL_SUB_AGG,
               "String_literal_sub_agg",
               Sort6( VIF_SUB_AGG, VIF_AGGREGATE, VIF_NAME_EXP, 
                      VIF_ACTUAL_PART, VIF_CHOICE, VIF_INDEX_SPEC),
               Sort4( INT, INT, ID, VIF_STATIC_VALUE),
               Sort4( "has_evaluation_time", "has_dimension", "has_srcpos", 
                      "has_value"),
               VIF_table );

   AddElement( VIF_STRING_VALUE,
               "String_value",
               Sort1( VIF_STATIC_VALUE),
               Sort1( ID),
               Sort1( "has_str_rep"),
               VIF_table );

   AddElement( VIF_SUBP_PARAM_DECL,
               "Subp_param_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort11( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, INT, 
                       VIF_NAME_EXP, VIF_SECREGION_PART, ID, INT, INT, 
                       VIF_SECSUBP_PARAM_DECL, VIF_SECVECATTRIBUTE_SPEC),
               Sort11( "has_evaluation_time", "has_constraint", "has_id", 
                       "has_class", "has_default", "has_enclosing_scope", 
                       "has_srcpos", "has_guarded_kind", "has_mode", 
                       "has_spec_param_decl", "has_user_att_s"),
               VIF_table );

   AddElement( VIF_SUBTYPE_INDICATOR,
               "Subtype_indicator",
               Sort2( VIF_CHOICE, VIF_INDEX_SPEC),
               Sort2( VIF_SECFUNC_DECL, VIF_CONSTRAINT),
               Sort2( "has_resolve_func", "has_constraint"),
               VIF_table );

   AddElement( VIF_SYMBOL_ENTRY_IN_TABLE,
               "Symbol_entry_in_table",
               Sort1( VIF_IMPORTED_ITEM),
               Sort7( VIF_SECVECITEM, VIF_SECSYMBOL_ENTRY_IN_TABLE, INT, 
                      VIF_SECITEM, VIF_SECVECSYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECSYMBOL_ENTRY_IN_TABLE, ID),
               Sort7( "has_def_s", "has_next_st_element", "has_h_value", 
                      "has_def", "has_profile_s", "has_name_prefix", 
                      "has_simple_name"),
               VIF_table );

   AddElement( VIF_TYPE_CONVERSION,
               "Type_conversion",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort5( INT, VIF_SECCONSTRAINT, VIF_NAME_EXP, ID, 
                      VIF_SECSTATIC_VALUE),
               Sort5( "has_evaluation_time", "has_constraint", 
                      "has_converted_exp", "has_srcpos", "has_value"),
               VIF_table );

   AddElement( VIF_TYPE_CONVERSION_ON_ASSOC,
               "Type_conversion_on_assoc",
               Sort2( VIF_FORMAL_PART, VIF_ACTUAL_PART),
               Sort2( VIF_NAME_EXP, VIF_SECCONSTRAINT),
               Sort2( "has_converted_exp", "has_constraint"),
               VIF_table );

   AddElement( VIF_TYPE_CONVERSION_ON_PARTIAL_FORMAL,
               "Type_conversion_on_partial_formal",
               Sort1( VIF_PARTIAL_FORMAL_PART),
               Sort2( VIF_SUB_ELEMENT, VIF_SECCONSTRAINT),
               Sort2( "has_converted_subelement", "has_constraint"),
               VIF_table );

   AddElement( VIF_UNARY_OPERATION,
               "Unary_operation",
               Sort4( VIF_NAME_EXP, VIF_ACTUAL_PART, VIF_CHOICE, 
                      VIF_INDEX_SPEC),
               Sort6( INT, VIF_SECCONSTRAINT, ID, VIF_STATIC_VALUE, 
                      VIF_NAME_EXP, VIF_SECFUNC_DEF),
               Sort6( "has_evaluation_time", "has_constraint", "has_srcpos", 
                      "has_value", "has_right_exp", "has_func_name"),
               VIF_table );

   AddElement( VIF_UNCONNECTED,
               "Unconnected",
               Sort1( VIF_ACTUAL_PART),
               Sort1( ID),
               Sort1( "has_srcpos"),
               VIF_table );

   AddElement( VIF_UNCONSTRAINED_ARRAY_TYPE_DECL,
               "Unconstrained_array_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort10( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, INT, 
                       VIF_SUBTYPE_INDICATOR, VIF_SECREGION_PART, ID, INT, 
                       VIF_VECSUBTYPE_INDICATOR, VIF_SECVECATTRIBUTE_SPEC),
               Sort10( "has_evaluation_time", "has_constraint", "has_id", 
                       "has_dimension", "has_elem_subtype", 
                       "has_enclosing_scope", "has_srcpos", 
                       "has_access_subelement", "has_index_range_s", 
                       "has_user_att_s"),
               VIF_table );

   AddElement( VIF_UNIV_INTEGER_TYPE_DECL,
               "Univ_integer_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort3( VIF_SECREGION_PART, VIF_CONSTRAINT, 
                      VIF_SYMBOL_ENTRY_IN_TABLE),
               Sort3( "has_enclosing_scope", "has_constraint", "has_id"),
               VIF_table );

   AddElement( VIF_UNIV_REAL_TYPE_DECL,
               "Univ_real_type_decl",
               Sort4( VIF_TYPE_DECL, VIF_TYPE_MARK_DECL, VIF_ITEM, 
                      VIF_IMPORTED_ITEM),
               Sort3( VIF_SECREGION_PART, VIF_CONSTRAINT, 
                      VIF_SYMBOL_ENTRY_IN_TABLE),
               Sort3( "has_enclosing_scope", "has_constraint", "has_id"),
               VIF_table );

   AddElement( VIF_USE_CLAUSE,
               "Use_clause",
               Sort1( VIF_ITEM),
               Sort2( VIF_SECIMPORTED_ITEM, VIF_SECDESIGN_LIBRARY),
               Sort2( "has_name", "has_library"),
               VIF_table );

   AddElement( VIF_VARIABLE_ASSIGN_STM,
               "Variable_assign_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort5( ID, VIF_NAME_EXP, VIF_TARGET, VIF_LABEL_DECL, 
                      VIF_SECREGION_PART),
               Sort5( "has_srcpos", "has_assigned_exp", "has_variable_name", 
                      "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_VARIABLE_DECL,
               "Variable_decl",
               Sort3( VIF_OBJECT_ITEM, VIF_ITEM, VIF_IMPORTED_ITEM),
               Sort7( INT, VIF_CONSTRAINT, VIF_SYMBOL_ENTRY_IN_TABLE, 
                      VIF_SECREGION_PART, ID, VIF_SECVECATTRIBUTE_SPEC, 
                      VIF_NAME_EXP),
               Sort7( "has_evaluation_time", "has_constraint", "has_id", 
                      "has_enclosing_scope", "has_srcpos", "has_user_att_s", 
                      "has_value_exp"),
               VIF_table );

   AddElement( VIF_WAIT_STM,
               "Wait_stm",
               Sort2( VIF_SEQUENTIAL_STM, VIF_STATEMENT),
               Sort6( ID, VIF_NAME_EXP, VIF_VECNAME_EXP, VIF_NAME_EXP, 
                      VIF_LABEL_DECL, VIF_SECREGION_PART),
               Sort6( "has_srcpos", "has_condition", "has_sensitive_s", 
                      "has_time_limit", "has_label", "has_enclosing_scope"),
               VIF_table );

   AddElement( VIF_WAVEFORM_ELEMENT,
               "Waveform_element",
               Sort1( VIF_WAVEFORM_ELEM),
               Sort2( VIF_NAME_EXP, VIF_NAME_EXP),
               Sort2( "has_time_exp", "has_waveform_value_exp"),
               VIF_table );

   AddElement( VIF_WHILE_ITERATION,
               "While_iteration",
               Sort2( VIF_ITERATION, VIF_SCHEME),
               Sort1( VIF_NAME_EXP),
               Sort1( "has_condition"),
               VIF_table );

   AddSort( VIF_ASSOCIATIONS, "Associations", VIF_table);

   AddSort( VIF_AGG_ASSOC, "Agg_assoc", VIF_table);

   AddSort( VIF_ATTRIBUTE, "Attribute", VIF_table);

   AddSort( VIF_ATTRIBUTE_FORM_RANGE_CONSTRAINT, "Attribute_form_range_constraint", VIF_table);

   AddSort( VIF_BOUNDED_FORM_RANGE_CONSTRAINT, "Bounded_form_range_constraint", VIF_table);

   AddSort( VIF_CASE_ALTERNATIVE, "Case_alternative", VIF_table);

   AddSort( VIF_CONCURRENT_STM, "Concurrent_stm", VIF_table);

   AddSort( VIF_CONFIG_ITEM, "Config_item", VIF_table);

   AddSort( VIF_ENUMERATION_LITERAL, "Enumeration_literal", VIF_table);

   AddSort( VIF_FORMAL_PART, "Formal_part", VIF_table);

   AddSort( VIF_FUNC_DEF, "Func_def", VIF_table);

   AddSort( VIF_GENERATION, "Generation", VIF_table);

   AddSort( VIF_ITERATION, "Iteration", VIF_table);

   AddSort( VIF_LIBRARY_UNIT_ITEM, "Library_unit_item", VIF_table);

   AddSort( VIF_OBJECT_ITEM, "Object_item", VIF_table);

   AddSort( VIF_OBJ_NAME, "Obj_name", VIF_table);

   AddSort( VIF_PROC_DEF, "Proc_def", VIF_table);

   AddSort( VIF_RANGE_CONSTRAINT_CLASS, "Range_constraint_class", VIF_table);

   AddSort( VIF_REGION_PART, "Region_part", VIF_table);

   AddSort( VIF_SCHEME, "Scheme", VIF_table);

   AddSort( VIF_SELECTED_ALTERNATIVE, "Selected_alternative", VIF_table);

   AddSort( VIF_SEQUENTIAL_STM, "Sequential_stm", VIF_table);

   AddSort( VIF_STATEMENT, "Statement", VIF_table);

   AddSort( VIF_STATIC_VALUE, "Static_value", VIF_table);

   AddSort( VIF_SUBP_BODY, "Subp_body", VIF_table);

   AddSort( VIF_SUBTYPE_DECL, "Subtype_decl", VIF_table);

   AddSort( VIF_SUB_AGG, "Sub_agg", VIF_table);

   AddSort( VIF_SUB_ELEMENT, "Sub_element", VIF_table);

   AddSort( VIF_TARGET, "Target", VIF_table);

   AddSort( VIF_TOP_LEVEL_AGG, "Top_level_agg", VIF_table);

   AddSort( VIF_TYPE_DECL, "Type_decl", VIF_table);

   AddSort( VIF_TYPE_MARK_DECL, "Type_mark_decl", VIF_table);

   AddSort( VIF_USED_BLOCK, "Used_block", VIF_table);

   AddSort( VIF_WAVEFORM_ELEM, "Waveform_elem", VIF_table);

   AddSort( VIF_AGGREGATE, "Aggregate", VIF_table);

   AddSort( VIF_ALTERNATIVE, "Alternative", VIF_table);

   AddSort( VIF_CONSTRAINT, "Constraint", VIF_table);

   AddSort( VIF_ITEM, "Item", VIF_table);

   AddSort( VIF_NAME_EXP, "Name_exp", VIF_table);

   AddSort( VIF_PARTIAL_FORMAL_PART, "Partial_formal_part", VIF_table);

   AddSort( VIF_SIGNAL_SPECS, "Signal_specs", VIF_table);

   AddSort( VIF_ACTUAL_PART, "Actual_part", VIF_table);

   AddSort( VIF_CHOICE, "Choice", VIF_table);

   AddSort( VIF_IMPORTED_ITEM, "Imported_item", VIF_table);

   AddSort( VIF_INDEX_SPEC, "Index_spec", VIF_table);

   AddSort( VIF_NAMED_ENTITY, "Named_entity", VIF_table);

   return( VIF_table);
}
