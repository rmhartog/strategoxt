#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_w_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_u_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_k_8;
void init_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_o_8, term_e_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_x_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_j_9, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_o_16, term_p_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_9, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_a_19, term_b_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_p_19, term_t_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_q_20, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_x_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_u_8, term_f_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_j_21, term_k_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_21, term_t_21, term_u_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, term_r_22);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.pp.af", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_abox_format_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm o_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_78 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm x_84 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_84 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm u_84 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm io_pp_pp_table_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_abox2text_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_k_8;
    return(t);
  }
  t = xtc_transform_2_0(c_0, pass_verbose_0_0, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  t = term_l_8;
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        t = term_o_8;
      }
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_1, term_o_8);
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
          t = SSL_subtr(c_1, (ATerm) ATmakeInt(1));
        }
      e_1 = t;
      t = SSL_int_to_string(e_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_l_8);
    }
  }
  return(t);
}
ATerm xtc_abox_format_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_r_8;
    return(t);
  }
  t = xtc_transform_2_0(n_0, pass_verbose_0_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  t = SSL_table_keys(n_1);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm o_1 = NULL,u_1 = NULL;
      o_1 = t;
      t = SSL_table_get(n_1, o_1);
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_1, u_1);
      return(t);
    }
    t = map_1_0(o_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm v_1 = NULL,x_1 = NULL;
    v_1 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    x_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_1, term_u_8);
    t = geq_0_0(t);
    t = v_1;
    t = v_78(t);
    return(t);
  }
  t = try_1_0(p_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, e_2));
  {
    ATerm q_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((f_2 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          i_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
    t = not_null(i_2);
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1_0(a_77, t);
              return(t);
            }
            t = Cons_2_0(a_77, r_0, t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            {
              ATerm m_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_9 = ATgetFirst((ATermList) t);
                  m_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_2;
              t = filter_1_0(a_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = b_85(t);
      t = o_2(t);
      return(t);
    }
    t = try_1_0(s_0, t);
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm t_0 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm h_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_9;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_0, t);
    t = p_2;
  }
  return(t);
}
ATerm say_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,e_0 = NULL;
  r_2 = t;
  t = e_65(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
  t = r_2;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm s_2 = NULL,v_2 = NULL;
    s_2 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    v_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_2, term_i_9);
    t = geq_0_0(t);
    t = s_2;
    t = u_78(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm x_2 = NULL,z_2 = NULL;
    x_2 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    z_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_2, term_j_9);
    t = geq_0_0(t);
    t = x_2;
    t = w_78(t);
    return(t);
  }
  t = try_1_0(v_0, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_3 = ATgetFirst((ATermList) t);
      h_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_73(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm i_3 = NULL;
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, i_3);
      t = o_73(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = h_3;
  }
  return(t);
}
ATerm union_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_3;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm k_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_3;
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = k_9;
          {
            ATerm o_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_0 (ATerm t)
                {
                  t = j_3;
                  return(t);
                }
                t = HdMember_p__2_0(k_73, x_0, t);
                t = m_3(t);
                ;
                LocalPopChoice(q_9);
              }
            else
              {
                t = o_9;
                t = Cons_2_0(_id, m_3, t);
              }
          }
        }
      return(t);
    }
    t = m_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm n_3 = NULL;
    if(match_cons(t, sym__2))
      {
        n_3 = ATgetArgument(t, 0);
        if((n_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(y_0, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__3))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      v_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_3, s_3);
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_10 = ATgetArgument(t, 0);
            ATerm g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_3, s_3);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_3, v_3);
    t = union_0_0(t);
    y_3 = t;
    t = SSL_table_put(r_3, s_3, y_3);
    t = (ATerm) ATmakeAppl(sym__3, r_3, s_3, v_3);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm b_4 = NULL,d_4 = NULL;
      if(match_cons(t, sym__2))
        {
          b_4 = ATgetArgument(t, 0);
          d_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_4, b_4, d_4);
      t = f_79(t);
      return(t);
    }
    t = map_1_0(z_0, t);
  }
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 = NULL;
      b_1 = t;
      t = SSL_access(b_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(l_10);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_10;
      {
        ATerm r_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_10 = t;
            if((PushChoice() == 0))
              {
                ATerm g_1 = NULL;
                g_1 = t;
                t = SSL_access(g_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_10;
              }
            {
              ATerm a_1 (ATerm t)
              {
                t = term_w_10;
                return(t);
              }
              t = debug_1_0(a_1, t);
            }
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = r_10;
            {
              ATerm f_1 (ATerm t)
              {
                t = term_x_10;
                return(t);
              }
              t = debug_1_0(f_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,k_4 = NULL;
  h_4 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = term_y_10;
        return(t);
      }
      t = debug_1_0(i_1, t);
      return(t);
    }
    t = if_verbose5_1_0(h_1, t);
    {
      ATerm z_10 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, h_4));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_10;
        }
      i_4 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, h_4));
      t = i_4;
      {
        ATerm l_1 (ATerm t)
        {
          ATerm m_1 (ATerm t)
          {
            t = term_a_11;
            return(t);
          }
          t = debug_1_0(m_1, t);
          return(t);
        }
        t = if_verbose4_1_0(l_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_b_11;
              return(t);
            }
            t = say_1_0(q_1, t);
            return(t);
          }
          t = if_verbose6_1_0(p_1, t);
          k_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_11, k_4);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_d_11;
                return(t);
              }
              t = say_1_0(s_1, t);
              return(t);
            }
            t = if_verbose6_1_0(r_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, h_4), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_c_11, (ATerm)ATmakeAppl(sym_Imported_1, h_4), (ATerm) ATempty);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm w_1 (ATerm t)
                {
                  t = term_b_11;
                  return(t);
                }
                t = say_1_0(w_1, t);
                return(t);
              }
              t = if_verbose4_1_0(t_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm j_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = j_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_p_11;
      return(t);
    }
    t = debug_1_0(z_1, t);
    return(t);
  }
  t = if_verbose5_1_0(y_1, t);
  l_4 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = l_4;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = term_s_11;
          return(t);
        }
        t = debug_1_0(b_2, t);
        return(t);
      }
      t = if_verbose5_1_0(a_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_v_11;
          return(t);
        }
        t = debug_1_0(h_2, t);
        return(t);
      }
      t = if_verbose5_1_0(d_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm j_1 = NULL,k_1 = NULL;
              j_1 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_1));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_11 = ATgetFirst((ATermList) t);
                  if(match_cons(y_11, sym__2))
                    {
                      ATerm a_12 = ATgetArgument(y_11, 0);
                      k_1 = ATgetArgument(y_11, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = k_1;
            }
          }
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = debug_1_0(k_2, t);
            return(t);
          }
          t = if_verbose5_1_0(j_2, t);
        }
      }
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm m_4 = NULL;
        m_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), m_4), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), m_4), term_b_12);
        {
          ATerm l_2 (ATerm t)
          {
            t = term_c_11;
            t = table_getlist_0_0(t);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_d_12;
                return(t);
              }
              t = debug_1_0(n_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(l_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = NULL;
      s_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_4, term_i_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_j_12;
          return(t);
        }
        t = debug_1_0(q_2, t);
        _fail(t);
      }
    }
  p_4 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_4);
  q_4 = t;
  t = p_4;
  t = fclose_0_0(t);
  t = q_4;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_4 = NULL,y_4 = NULL;
  v_4 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = v_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          y_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(y_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_6 (ATerm x_5, ATerm t)
  {
    t = SSL_fclose(x_5);
    return(t);
  }
  ATerm c_6 = NULL,f_6 = NULL;
  f_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_6 = ATgetArgument(t, 0);
      {
        ATerm k_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_6);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = k_12;
            t = j_6(f_6, t);
          }
      }
    }
  else
    {
      t = j_6(f_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  t = SSL_stdin_stream();
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_6 = NULL;
  t = SSL_stdout_stream();
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  t = SSL_stderr_stream();
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_6);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      ATerm q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 = NULL,g_2 = NULL;
        c_2 = t;
        t = SSL_explode_term(c_2);
        if(match_cons(t, sym__2))
          {
            ATerm y_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_12 = ATgetArgument(t, 1);
              if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
                {
                  g_2 = ATgetFirst((ATermList) z_12);
                  {
                    ATerm a_13 = (ATerm) ATgetNext((ATermList) z_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
              ATerm t_2 (ATerm t)
              {
                ATerm k_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    k_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_7;
                return(t);
              }
              t = _2_0(t_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_7 = ATgetArgument(t, 0);
                  i_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_7, i_7);
              j_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_7);
              ;
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              {
                ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
                ATerm w_2 (ATerm t)
                {
                  ATerm o_7 = NULL;
                  o_7 = t;
                  t = SSL_is_string(o_7);
                  return(t);
                }
                t = _2_0(w_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_7 = ATgetArgument(t, 0);
                    m_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_7, m_7);
                n_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_7, term_g_13);
  t = open_stream_0_0(t);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, q_7);
  t = o_65(t);
  t = fclose_0_0(t);
  t = q_7;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_13 = ATgetArgument(t, 0);
        if(match_cons(h_13, sym_Stream_1))
          {
            s_7 = ATgetArgument(h_13, 0);
          }
        else
          _fail(t);
        t_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(s_7, t_7);
    u_7 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
    return(t);
  }
  t = WriteToFile_1_0(y_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  v_7 = t;
  t = xtc_new_file_0_0(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_7, v_7);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(w_7);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_7);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_81, t_81, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm x_7 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm y_7 = NULL;
    y_7 = t;
    t = SSL_explode_string(y_7);
    return(t);
  }
  t = map_1_0(a_3, t);
  t = concat_0_0(t);
  x_7 = t;
  t = SSL_implode_string(x_7);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm u_2 = NULL;
        t = SSL_int_to_string(t_8);
        u_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_13), u_2), term_m_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm u_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_8 = ATgetArgument(t, 0);
          v_8 = ATgetArgument(t, 1);
          w_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_8);
      u_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_8), term_y_13), u_3), term_x_13), t_8);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = t_69(t);
    c_9 = t;
    return(t);
  }
  t = fetch_1_0(b_3, t);
  t = not_null(c_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_21), term_r_21), term_n_21), term_g_21), term_d_21), term_y_20), term_s_20), term_k_20), term_g_20), term_u_19), term_m_19), term_e_19), term_w_18), term_p_18), term_k_18), term_a_18), term_j_17), term_g_17), term_a_17), term_q_16), term_g_16), term_y_15), term_q_15), term_l_15), term_h_15), term_y_14), term_n_14), term_f_14);
        {
          ATerm c_3 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm w_21 = ATgetArgument(t, 0);
                if((d_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm x_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(c_3, t);
        }
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm f_9 = NULL,g_9 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm y_21 = ATgetArgument(t, 0);
          f_9 = ATgetArgument(t, 1);
          {
            ATerm z_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_9;
      {
        ATerm a_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_22;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        g_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, g_9), term_c_22));
      }
      return(t);
    }
    t = try_1_0(d_3, t);
    t = e_9;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  t = fork_0_0(t);
  m_9 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_9;
        t = b_64(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATmakeAppl(sym__2, m_9, l_9);
        t = c_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm p_9 = NULL;
  ATerm e_3 (ATerm t)
  {
    ATerm r_9 = NULL;
    if(match_cons(t, sym__2))
      {
        r_9 = ATgetArgument(t, 0);
        p_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(r_9);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm f_22 = ATgetArgument(t, 0);
        if(((ATgetType(f_22) != AT_INT) || (ATgetInt((ATermInt) f_22) != 0)))
          _fail(t);
        {
          ATerm g_22 = ATgetArgument(t, 1);
        }
        {
          ATerm h_22 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = p_9;
    return(t);
  }
  t = fork_2_0(d_64, e_3, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_3 (ATerm t)
    {
      t = SSL_execvp(s_9, t_9);
      return(t);
    }
    t = fork_and_wait_1_0(f_3, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t = j_81(t);
  t = xtc_find_warning_0_0(t);
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, u_9);
  t = call_0_0(t);
  t = u_9;
  return(t);
}
ATerm assert_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_77(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_9, w_9, x_9);
  t = table_push_0_0(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(y_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_9 = ATgetFirst((ATermList) t);
        a_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(y_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_10), (ATerm) ATinsert(CheckATermList(z_9), w_9)));
    t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  t = h_65(t);
  {
    ATerm l_3 (ATerm t)
    {
      t = term_k_22;
      return(t);
    }
    t = debug_1_0(l_3, t);
    t = b_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_10 (ATerm f_10, ATerm t)
  {
    t = f_10;
    {
      ATerm l_22 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_22 = ATgetArgument(t, 0);
              ATerm n_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_22;
        }
      {
        ATerm o_3 (ATerm t)
        {
          t = term_o_22;
          return(t);
        }
        t = obsolete_1_0(o_3, t);
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_g_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm q_10 (ATerm h_10, ATerm i_10, ATerm j_10, ATerm t)
  {
    t = SSL_open_file(h_10, i_10);
    return(t);
  }
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_10(m_10, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = q_10(n_10, o_10, m_10, t);
          }
      }
    }
  else
    {
      t = p_10(m_10, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = term_r_22;
  t = new_0_0(t);
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_s_22);
  t = conc_strings_0_0(t);
  {
    ATerm p_3 (ATerm t)
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = SSL_access(c_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(p_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  t = new_file_0_0(t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_10, term_g_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, u_10, term_r_22);
  {
    ATerm q_3 (ATerm t)
    {
      t = term_t_22;
      return(t);
    }
    t = assert_1_0(q_3, t);
    t = u_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_4 = NULL,j_4 = NULL;
      t = g_11;
      t = xtc_new_file_0_0(t);
      f_4 = t;
      t = m_0(t);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATinsert(ATempty, f_4), term_u_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
    }
  else
    {
      ATerm x_4 = NULL,a_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_11;
      t = xtc_new_file_0_0(t);
      x_4 = t;
      t = m_0(t);
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_4), term_u_22), h_11), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_11);
  k_11 = t;
  t = l_11;
  t = y_61(t);
  m_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, m_11), k_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(x_22);
      t = xtc_transform_file_2_0(l_81, m_81, t);
    }
  else
    {
      t = w_22;
      t = xtc_transform_term_2_0(l_81, m_81, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = e_12;
        t = k_0(t);
        e_5 = t;
        {
          ATerm c_23 = t;
          int d_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(d_23);
            }
          else
            {
              t = c_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(f_12, e_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, f_12);
        }
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_5 = NULL;
              t = e_12;
              t = k_0(t);
              i_5 = t;
              {
                ATerm g_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_23 = t;
                    int i_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(i_23);
                      }
                    else
                      {
                        t = h_23;
                        {
                          ATerm j_23 = t;
                          int k_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(k_23);
                            }
                          else
                            {
                              t = j_23;
                              {
                                ATerm j_5 = NULL;
                                j_5 = t;
                                if((f_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = j_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_23;
                  }
                t = SSL_copy(f_12, i_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_12);
              }
              ;
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = e_12;
              t = k_0(t);
              if((f_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm o_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_12, m_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_23 = ATgetFirst((ATermList) t);
            l_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_5;
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    n_12 = t;
    t = SSL_table_put(l_12, m_12, n_12);
    t = (ATerm) ATmakeAppl(sym__2, l_12, m_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  t = r_77(t);
  u_12 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_12, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_12 = ATgetFirst((ATermList) t);
        v_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_12, (ATerm)ATmakeAppl(sym_Scopes_0), v_12);
    t = w_12;
    {
      ATerm t_3 (ATerm t)
      {
        ATerm x_12 = NULL;
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_12, x_12);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(t_3, t);
      t = t_12;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_78(t);
      t = n_78(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = n_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  t = q_77(t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_13, term_u_23);
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATempty;
      }
    d_13 = t;
    t = SSL_table_put(c_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_13), (ATerm) ATempty));
    t = b_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm i_13 = NULL;
  ATerm w_3 (ATerm t)
  {
    t = term_t_22;
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm j_13 = NULL;
      j_13 = t;
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_13 = ATgetFirst((ATermList) t);
            {
              ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_13;
        {
          ATerm g_4 (ATerm t)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm k_13 = NULL;
              k_13 = t;
              t = SSL_remove(k_13);
              return(t);
            }
            t = try_1_0(n_4, t);
            return(t);
          }
          t = map_1_0(g_4, t);
          t = j_13;
          {
            ATerm o_4 (ATerm t)
            {
              t = term_t_22;
              return(t);
            }
            t = end_scope_1_0(o_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(v_80, e_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_13 = NULL;
        t = term_v_22;
        t = get_config_0_0(t);
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_13);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = term_e_24;
      }
    t = w_80(t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_22;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = term_h_24;
          }
        return(t);
      }
      t = copy_to_1_0(u_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(t_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm n_13 = NULL;
    n_13 = t;
    if(match_string(t, "-k"))
      {
        t = n_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = n_13;
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm o_13 = NULL,p_13 = NULL;
    o_13 = t;
    t = SSL_string_to_int(o_13);
    p_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_13);
    t = o_13;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_i_24;
    return(t);
  }
  t = ArgOption_3_0(w_4, z_4, b_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm r_13 = NULL;
        r_13 = t;
        if(match_string(t, "-S"))
          {
            t = r_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = r_13;
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_24;
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_n_24;
        return(t);
      }
      t = Option_3_0(c_5, d_5, f_5, t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm s_13 = NULL,t_13 = NULL;
              s_13 = t;
              t = SSL_string_to_int(s_13);
              t_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, s_13);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_q_24;
              return(t);
            }
            t = ArgOption_3_0(g_5, h_5, k_5, t);
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm m_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_24;
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                t = term_s_24;
                return(t);
              }
              t = Option_3_0(m_5, n_5, o_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm v_13 = NULL;
    v_13 = t;
    if(match_string(t, "-o"))
      {
        t = v_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_13;
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm w_13 = NULL;
    w_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_13);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_v_24;
    return(t);
  }
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm s_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_24;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_z_24;
          return(t);
        }
        t = Option_3_0(s_5, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  c_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm m_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          g_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_14;
      t = h_0(t);
      t = h_14;
      t = i_0(t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(i_14), m_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm o_14 = NULL;
    o_14 = t;
    if(match_string(t, "-i"))
      {
        t = o_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = o_14;
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm p_14 = NULL;
    p_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, p_14);
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_a_25;
    return(t);
  }
  t = ArgOption_3_0(v_5, w_5, y_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  t = term_r_22;
  t = whoami_0_0(t);
  r_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = q_14;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_22;
  t = whoami_0_0(t);
  s_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_75(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm v_14 = NULL,w_14 = NULL,z_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_14 = ATgetFirst((ATermList) t);
            w_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_14;
        t = foldr_2_0(x_75, y_75, t);
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, z_14);
        t = y_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  a_15 = t;
  t = SSL_explode_term(a_15);
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15;
  t = foldr_2_0(v_73, w_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_15 = NULL;
  t = times_0_0(t);
  {
    ATerm z_5 (ATerm t)
    {
      t = term_l_24;
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm d_15 = NULL,e_15 = NULL;
      if(match_cons(t, sym__2))
        {
          d_15 = ATgetArgument(t, 0);
          e_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_15, e_15);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            t = SSL_addr(d_15, e_15);
          }
      }
      return(t);
    }
    t = crush_2_0(z_5, a_6, t);
    c_15 = t;
    t = SSL_TicksToSeconds(c_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_15;
        if((r_15 != t))
          {
            _fail(t);
          }
        t = p_15;
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = p_15;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_15, s_15);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              t = SSL_gtr(r_15, s_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_15, s_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm v_15 = NULL,w_15 = NULL;
    v_15 = t;
    t = term_l_8;
    t = get_config_0_0(t);
    w_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_15, term_o_8);
    t = geq_0_0(t);
    t = v_15;
    t = r_78(t);
    return(t);
  }
  t = try_1_0(b_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm z_15 = NULL,a_16 = NULL;
    t = run_time_0_0(t);
    z_15 = t;
    t = term_r_22;
    t = whoami_0_0(t);
    a_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_16));
    t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_25), z_15), term_x_13), a_16));
    return(t);
  }
  t = if_verbose1_1_0(d_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              {
                ATerm v_25 = t;
                int w_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(w_25);
                  }
                else
                  {
                    t = v_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(e_6, t);
      }
    }
  t = x_82(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      e_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_16 = NULL,j_16 = NULL;
        t = e_16;
        t = g_0(t);
        i_16 = t;
        t = d_16;
        t = f_0(t);
        j_16 = t;
        t = e_16;
        {
          ATerm g_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_16), j_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_16);
  k_16 = t;
  t = l_16;
  t = f_62(t);
  m_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_16), k_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm i_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_z_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm r_16 = NULL;
      r_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_16), term_a_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  s_16 = t;
  t = t_16;
  t = g_62(t);
  u_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_16), s_16);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm z_16 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_69, _id, t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = Cons_2_0(_id, z_16, t);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  t = fetch_1_0(s_83, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_26 = ATgetFirst((ATermList) t);
                ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_17;
          }
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATinsert(ATempty, b_17);
      }
    c_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_17);
    t = b_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm k_17 = NULL,l_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_17 = ATgetFirst((ATermList) t);
            l_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_17;
        {
          ATerm m_6 (ATerm t)
          {
            t = l_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  t = SSL_explode_term(p_17);
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm r_17 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_17, t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_69(t);
      }
    return(t);
  }
  t = r_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_17;
  {
    ATerm n_6 (ATerm t)
    {
      t = s_17;
      return(t);
    }
    t = at_end_1_0(n_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  z_17 = t;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_17);
  u_17 = t;
  t = v_17;
  t = q_55(t);
  x_17 = t;
  t = w_17;
  t = r_55(t);
  y_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_17, y_17), u_17);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_18 = NULL;
  ATerm q_6 (ATerm t)
  {
    ATerm e_18 = NULL;
    e_18 = t;
    t = SSL_explode_string(e_18);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm f_18 = NULL;
    f_18 = t;
    t = SSL_explode_string(f_18);
    return(t);
  }
  t = _2_0(q_6, r_6, t);
  t = conc_0_0(t);
  d_18 = t;
  t = SSL_implode_string(d_18);
  return(t);
}
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  t = a_65(t);
  h_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_18), h_18));
  t = g_18;
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  ATerm i_18 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = Cons_2_0(h_69, i_18, t);
      }
    return(t);
  }
  t = i_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL;
      o_18 = t;
      t = SSL_is_string(o_18);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_6, t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            {
              ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
              s_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_18 = ATgetArgument(t, 0);
                  t = t_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_18 = ATgetArgument(t, 0);
                      t = t_18;
                      {
                        ATerm u_26 = t;
                        int v_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_26);
                          }
                        else
                          {
                            t = u_26;
                            {
                              ATerm t_6 (ATerm t)
                              {
                                t = term_w_26;
                                return(t);
                              }
                              t = debug_1_0(t_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_18 = NULL,z_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_18 = ATgetArgument(t, 0);
                          u_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_18;
                      t = eval_config_0_0(t);
                      y_18 = t;
                      t = u_18;
                      t = eval_config_0_0(t);
                      z_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_19);
  {
    ATerm u_6 (ATerm t)
    {
      ATerm d_19 = NULL;
      t = eval_config_0_0(t);
      d_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_19, d_19);
      t = d_19;
      return(t);
    }
    t = try_1_0(u_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_77(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_d_27;
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        t = term_e_27;
        return(t);
      }
      t = Option_3_0(v_6, w_6, x_6, t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm y_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_27;
          return(t);
        }
        ATerm a_7 (ATerm t)
        {
          t = term_g_27;
          return(t);
        }
        t = Option_3_0(y_6, z_6, a_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__3))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
      i_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_27 = ATgetArgument(t, 0);
            ATerm k_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_19, h_19);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
    j_19 = t;
    t = SSL_table_put(g_19, h_19, (ATerm) ATinsert(CheckATermList(j_19), i_19));
    t = (ATerm) ATmakeAppl(sym__3, g_19, h_19, i_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm o_19 = NULL;
  t = term_r_22;
  t = x_84(t);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, o_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_19 = ATgetFirst((ATermList) t);
          s_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_19;
      t = a_0(t);
      t = term_r_22;
      t = b_0(t);
      v_19 = t;
      t = (ATerm) ATinsert(CheckATermList(s_19), v_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm y_19 = NULL;
    y_19 = t;
    if(match_string(t, "--help"))
      {
        t = y_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_19;
          }
      }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_27;
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_o_27;
    return(t);
  }
  t = Option_3_0(b_7, d_7, e_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  e_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_20 = ATgetFirst((ATermList) t);
      b_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_20);
  z_19 = t;
  t = a_20;
  t = z_56(t);
  c_20 = t;
  t = b_20;
  t = a_57(t);
  d_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_20), c_20), z_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = term_p_27;
      t = v_84(t);
      return(t);
    }
    t = try_1_0(f_7, t);
    t = l_20;
    {
      ATerm g_7 (ATerm t)
      {
        ATerm m_20 = NULL;
        m_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, m_20);
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
                t = v_84(t);
                t = Cons_2_0(_id, z_7, t);
              }
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm o_20 = NULL,p_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_20 = ATgetFirst((ATermList) t);
                  p_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_20), (ATerm) ATmakeAppl(sym_Undefined_1, o_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_7, z_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,z_20 = NULL;
  v_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_20;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_84(t);
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm b_8 (ATerm t)
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_21 = NULL;
            h_21 = t;
            {
              ATerm a_28 = t;
              int b_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_21;
                  {
                    ATerm c_28 = t;
                    int d_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(d_28);
                      }
                    else
                      {
                        t = c_28;
                        {
                          ATerm c_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(c_8, t);
                        }
                      }
                    t = h_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(b_28);
                }
              else
                {
                  t = a_28;
                  t = term_c_27;
                  t = get_config_0_0(t);
                  t = h_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  w_20 = t;
                  return(t);
                }
                t = Undefined_1_0(e_8, t);
                return(t);
              }
              t = option_defined_1_0(d_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), term_e_28));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(b_8, t);
      z_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm u_13 = NULL;
  t = parse_options_1_0(z_82, t);
  u_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), u_13);
  t = u_13;
  t = b_83(t);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_83, t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t)
{
  t = option_wrap_4_0(d_83, default_usage_0_0, _id, e_83, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_81(t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    t = xtc_io_1_0(b_81, t);
    return(t);
  }
  t = option_wrap_2_0(f_8, g_8, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, z_80, t);
  return(t);
}
ATerm io_pp_pp_table_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      t = term_l_28;
      return(t);
    }
    ATerm j_8 (ATerm t)
    {
      ATerm l_21 = NULL,m_21 = NULL;
      t = term_m_28;
      t = xtc_find_0_0(t);
      l_21 = t;
      t = term_n_28;
      t = xtc_find_0_0(t);
      m_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_21), term_o_28), l_21), term_o_28);
      return(t);
    }
    t = xtc_transform_2_0(i_8, j_8, t);
    t = xtc_abox_format_0_0(t);
    t = xtc_abox2text_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(h_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_pp_table_0_0(t);
  return(t);
}
