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
Symbol sym_Pipe_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_g_26;
ATerm term_f_26;
ATerm term_o_25;
ATerm term_y_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_i_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_i_16;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_n_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_q_9);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_g_12);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_r_7, term_d_13);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_g_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_d_13);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_d_13);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_d_13);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__3, term_l_21, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm n_59 (ATerm));
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm l_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm union_1 (ATerm, ATerm d_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_59 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm h_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_77 (ATerm));
ATerm assert_1 (ATerm, ATerm f_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm xtc_sglr_2 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm h_77 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm crush_2 (ATerm, ATerm s_69 (ATerm), ATerm t_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_80 (ATerm));
ATerm Program_1 (ATerm, ATerm y_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_72 (ATerm));
ATerm map_1 (ATerm, ATerm k_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm k_77 (ATerm));
ATerm io_parse_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_int_to_string(not_null(e_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  c_1 = t;
  y_0 :
  if(match_cons(c_1, sym__2))
    {
      d_1 = ATgetArgument(c_1, 0);
      e_1 = ATgetArgument(c_1, 1);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_1), not_null(e_1));
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            t = SSL_subtr(not_null(d_1), not_null(e_1));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm a_2 = NULL;
  ATerm s_2 = NULL,u_2 = NULL;
  ATerm t_2 = NULL;
  t = term_g_7;
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = term_n_7;
      }
    {
      t_2 = t;
      if(((s_2 != NULL) && (s_2 != t_2)))
        _fail(t_2);
      else
        s_2 = t_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_2), term_n_7);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_2 = t;
          if(((a_2 != NULL) && (a_2 != u_2)))
            _fail(u_2);
          else
            a_2 = u_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_2)), term_g_7);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_o_7;
    return(t);
  }
  t = xtc_transform_2(t, b_0, pass_verbose_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm p_7;
    p_7 = t;
    {
      ATerm b_3 = NULL;
      ATerm c_3 = NULL;
      t = term_g_7;
      {
        t = get_config_0(t);
        {
          c_3 = t;
          if(((b_3 != NULL) && (b_3 != c_3)))
            _fail(c_3);
          else
            b_3 = c_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_3), term_q_7);
        t = geq_0(t);
      }
    }
    t = p_7;
    t = n_59(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm h_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_r_7);
      return(t);
    }
    t = if_verbose3_1(t, h_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  t = SSL_table_keys(not_null(f_3));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_3 = NULL;
  l_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm n_3 = NULL;
        ATerm p_3 = NULL;
        n_3 = t;
        {
          ATerm q_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), not_null(n_3));
          {
            t = table_get_0(t);
            {
              q_3 = t;
              if(((p_3 != NULL) && (p_3 != q_3)))
                _fail(q_3);
              else
                p_3 = q_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(p_3));
        }
        return(t);
      }
      t = map_1(t, p_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm v_3 = NULL;
      ATerm w_3 = NULL;
      t = term_g_7;
      {
        t = get_config_0(t);
        {
          w_3 = t;
          if(((v_3 != NULL) && (v_3 != w_3)))
            _fail(w_3);
          else
            v_3 = w_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), term_y_7);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = p_59(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm c_8;
  c_8 = t;
  {
    ATerm z_3 = NULL;
    ATerm a_4 = NULL;
    a_4 = t;
    if(((z_3 != NULL) && (z_3 != a_4)))
      _fail(a_4);
    else
      z_3 = a_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(z_3));
      t = printnl_0(t);
    }
  }
  t = c_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm i_4 = NULL,j_4 = NULL;
  g_4 = t;
  {
    ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_4)));
    {
      t = table_get_0(t);
      {
        k_4 = t;
        e_4 :
        if(((ATgetType(k_4) == AT_LIST) && !(ATisEmpty(k_4))))
          {
            l_4 = ATgetFirst((ATermList) k_4);
            o_4 = (ATerm) ATgetNext((ATermList) k_4);
            f_4 :
            if(match_cons(l_4, sym__2))
              {
                m_4 = ATgetArgument(l_4, 0);
                n_4 = ATgetArgument(l_4, 1);
                {
                  if(((i_4 != NULL) && (i_4 != m_4)))
                    _fail(m_4);
                  else
                    i_4 = m_4;
                  if(((j_4 != NULL) && (j_4 != n_4)))
                    _fail(n_4);
                  else
                    j_4 = n_4;
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(j_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm a_5 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_4)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
              b_5 = t;
              t_4 :
              if(match_cons(b_5, sym__2))
                {
                  c_5 = ATgetArgument(b_5, 0);
                  d_5 = ATgetArgument(b_5, 1);
                  {
                    if(((x_4 != NULL) && (x_4 != c_5)))
                      _fail(c_5);
                    else
                      x_4 = c_5;
                    if(((a_5 != NULL) && (a_5 != d_5)))
                      _fail(d_5);
                    else
                      a_5 = d_5;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_0);
          }
        }
        t = not_null(a_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm h_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, l_75);
              return(t);
            }
            t = Cons_2(t, l_75, s_0);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = h_8;
            {
              ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
              i_5 = t;
              h_5 :
              if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
                {
                  j_5 = ATgetFirst((ATermList) i_5);
                  k_5 = (ATerm) ATgetNext((ATermList) i_5);
                  {
                    t = not_null(k_5);
                    t = filter_1(t, l_75);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = k_74(t);
      t = n_5(t);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm m_8;
  m_8 = t;
  {
    ATerm u_0 (ATerm t)
    {
      t = term_o_8;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm q_8 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_8;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, u_0);
  }
  t = m_8;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_g_7;
      {
        t = get_config_0(t);
        {
          q_5 = t;
          if(((p_5 != NULL) && (p_5 != q_5)))
            _fail(q_5);
          else
            p_5 = q_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_s_8);
        t = geq_0(t);
      }
    }
    t = r_8;
    t = o_59(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm v_8;
    v_8 = t;
    {
      ATerm t_5 = NULL;
      ATerm u_5 = NULL;
      t = term_g_7;
      {
        t = get_config_0(t);
        {
          u_5 = t;
          if(((t_5 != NULL) && (t_5 != u_5)))
            _fail(u_5);
          else
            t_5 = u_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_w_8);
        t = geq_0(t);
      }
    }
    t = v_8;
    t = q_59(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      if(((z_5 != NULL) && (z_5 != a_6)))
        _fail(a_6);
      else
        z_5 = a_6;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
    {
      h_6 = ATgetFirst((ATermList) g_6);
      i_6 = (ATerm) ATgetNext((ATermList) g_6);
      {
        t = i_70(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm l_6 = NULL;
            l_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(l_6));
              t = h_70(t);
            }
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(i_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym__2))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      {
        t = not_null(s_6);
        {
          ATerm x_6 (ATerm t)
          {
            ATerm z_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_6);
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = z_8;
                {
                  ATerm b_9 = t;
                  int c_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(t_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_70, z_0);
                      t = x_6(t);
                      ;
                      LocalPopChoice(c_9);
                    }
                  else
                    {
                      t = b_9;
                      t = Cons_2(t, _id, x_6);
                    }
                }
              }
            return(t);
          }
          t = x_6(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      {
        ATerm d_9;
        d_9 = t;
        {
          ATerm j_7 = NULL;
          ATerm k_7 = NULL,m_7 = NULL;
          ATerm l_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(e_7));
          {
            ATerm j_9 = t;
            int m_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(m_9);
              }
            else
              {
                t = j_9;
                t = (ATerm) ATempty;
              }
            {
              l_7 = t;
              if(((k_7 != NULL) && (k_7 != l_7)))
                _fail(l_7);
              else
                k_7 = l_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_7), not_null(f_7));
            {
              t = union_0(t);
              {
                m_7 = t;
                if(((j_7 != NULL) && (j_7 != m_7)))
                  _fail(m_7);
                else
                  j_7 = m_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_7), not_null(e_7), not_null(j_7));
            t = set_0(t);
          }
        }
        t = d_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = not_null(w_7);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
            z_7 = t;
            s_7 :
            if(match_cons(z_7, sym__2))
              {
                a_8 = ATgetArgument(z_7, 0);
                b_8 = ATgetArgument(z_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_7), not_null(a_8), not_null(b_8));
                  t = z_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, a_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = term_n_9;
        return(t);
      }
      t = debug_1(t, f_1);
      return(t);
    }
    t = if_verbose5_1(t, b_1);
    {
      ATerm o_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_9;
        }
      {
        ATerm p_9;
        p_9 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_8, term_q_9, (ATerm) ATinsert(ATempty, not_null(i_8)));
          t = table_put_0(t);
        }
        t = p_9;
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              t = term_v_9;
              return(t);
            }
            t = debug_1(t, h_1);
            return(t);
          }
          t = if_verbose4_1(t, g_1);
          {
            ATerm w_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(x_9);
              }
            else
              {
                t = w_9;
                t = (ATerm) ATempty;
              }
            {
              ATerm i_1 (ATerm t)
              {
                ATerm j_1 (ATerm t)
                {
                  t = term_y_9;
                  return(t);
                }
                t = say_1(t, j_1);
                return(t);
              }
              t = if_verbose6_1(t, i_1);
              {
                ATerm l_8 = NULL;
                l_8 = t;
                if(((k_8 != NULL) && (k_8 != l_8)))
                  _fail(l_8);
                else
                  k_8 = l_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(k_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = term_z_9;
                          return(t);
                        }
                        t = say_1(t, l_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, k_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_e_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm n_1 (ATerm t)
                              {
                                t = term_y_9;
                                return(t);
                              }
                              t = say_1(t, n_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, m_1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  t = SSL_getenv(not_null(p_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm b_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = b_10;
      {
        ATerm g_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = g_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      t = term_k_10;
      return(t);
    }
    t = debug_1(t, p_1);
    return(t);
  }
  t = if_verbose5_1(t, o_1);
  {
    ATerm p_10;
    p_10 = t;
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_10;
          t = table_get_0(t);
          ;
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_10;
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_u_10;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, q_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          t = term_x_10;
          return(t);
        }
        t = debug_1(t, t_1);
        return(t);
      }
      t = if_verbose5_1(t, s_1);
      {
        t = xtc_load_0(t);
        {
          ATerm y_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(a_11);
            }
          else
            {
              t = y_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm u_1 (ATerm t)
            {
              ATerm v_1 (ATerm t)
              {
                t = term_x_10;
                return(t);
              }
              t = debug_1(t, v_1);
              return(t);
            }
            t = if_verbose5_1(t, u_1);
          }
        }
      }
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm t_8 = NULL;
        ATerm u_8 = NULL;
        u_8 = t;
        if(((t_8 != NULL) && (t_8 != u_8)))
          _fail(u_8);
        else
          t_8 = u_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_11), not_null(t_8)), term_e_11);
          {
            t = error_0(t);
            {
              ATerm w_1 (ATerm t)
              {
                t = term_e_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      t = term_m_11;
                      return(t);
                    }
                    t = debug_1(t, x_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, w_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_8 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL;
      y_8 = t;
      {
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
        t = SSL_ReadFromFile(not_null(x_8));
      }
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = debug_1(t, y_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_stdin_0))
    {
      ATerm h_9 = NULL;
      ATerm i_9 = NULL;
      t = term_q_11;
      {
        t = ReadFromFile_0(t);
        {
          i_9 = t;
          if(((h_9 != NULL) && (h_9 != i_9)))
            _fail(i_9);
          else
            h_9 = i_9;
        }
      }
      t = not_null(h_9);
    }
  else
    {
      if(match_cons(f_9, sym_FILE_1))
        {
          g_9 = ATgetArgument(f_9, 0);
          {
            ATerm k_9 = NULL;
            ATerm l_9 = NULL;
            t = not_null(g_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_9 = t;
                  if(((k_9 != NULL) && (k_9 != l_9)))
                    _fail(l_9);
                  else
                    k_9 = l_9;
                }
              }
            }
            t = not_null(k_9);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      t = SSL_WriteToBinaryFile(not_null(t_9), not_null(u_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm c_10 = NULL;
  a_10 = t;
  {
    ATerm d_10 = NULL;
    t = xtc_new_file_0(t);
    {
      d_10 = t;
      {
        if(((c_10 != NULL) && (c_10 != d_10)))
          _fail(d_10);
        else
          c_10 = d_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(a_10));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_10);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_10));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_78, e_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  t = SSL_close_file(not_null(h_10));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym__2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      t = SSL_execvp(not_null(n_10), not_null(o_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_waitpid(not_null(t_10));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm d_11 = NULL;
  ATerm f_11 = NULL;
  d_11 = t;
  {
    t = fork_0(t);
    {
      f_11 = t;
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL;
            h_11 = t;
            z_10 :
            if(match_int(h_11, 0))
              {
                t = not_null(d_11);
                t = h_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            {
              ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
              t = not_null(f_11);
              {
                t = waitpid_0(t);
                {
                  i_11 = t;
                  b_11 :
                  if(match_cons(i_11, sym_WaitStatus_3))
                    {
                      j_11 = ATgetArgument(i_11, 0);
                      k_11 = ATgetArgument(i_11, 1);
                      l_11 = ATgetArgument(i_11, 2);
                      c_11 :
                      if(match_int(j_11, 0))
                        {
                          t = not_null(d_11);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
      }
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym__2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm z_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), not_null(u_11));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, z_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm a_12 = NULL;
  ATerm x_11;
  x_11 = t;
  {
    ATerm b_12 = NULL;
    t = u_77(t);
    {
      t = xtc_find_warning_0(t);
      {
        b_12 = t;
        if(((a_12 != NULL) && (a_12 != b_12)))
          _fail(b_12);
        else
          a_12 = b_12;
      }
    }
  }
  t = x_11;
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm c_12 = NULL;
      ATerm d_12 = NULL;
      d_12 = t;
      if(((c_12 != NULL) && (c_12 != d_12)))
        _fail(d_12);
      else
        c_12 = d_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(c_12));
        t = call_0(t);
      }
    }
    t = y_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
        ATerm z_11;
        z_11 = t;
        {
          ATerm t_12 = NULL;
          ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
          t = f_72(t);
          {
            t_12 = t;
            {
              if(((q_12 != NULL) && (q_12 != t_12)))
                _fail(t_12);
              else
                q_12 = t_12;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), not_null(m_12), not_null(n_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_12 = t;
                    int f_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), term_g_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(f_12);
                      }
                    else
                      {
                        t = e_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_12 = t;
                      j_12 :
                      if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                        {
                          v_12 = ATgetFirst((ATermList) u_12);
                          w_12 = (ATerm) ATgetNext((ATermList) u_12);
                          {
                            if(((r_12 != NULL) && (r_12 != v_12)))
                              _fail(v_12);
                            else
                              r_12 = v_12;
                            {
                              if(((s_12 != NULL) && (s_12 != w_12)))
                                _fail(w_12);
                              else
                                s_12 = w_12;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_12), term_g_12, (ATerm) ATinsert(CheckATermList(not_null(s_12)), (ATerm) ATinsert(CheckATermList(not_null(r_12)), not_null(m_12))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm h_12;
  h_12 = t;
  {
    t = t_72(t);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_i_12;
        return(t);
      }
      t = debug_1(t, b_2);
    }
  }
  t = h_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
      g_13 = t;
      b_13 :
      if(match_cons(g_13, sym__2))
        {
          h_13 = ATgetArgument(g_13, 0);
          i_13 = ATgetArgument(g_13, 1);
          {
            if(((f_13 != NULL) && (f_13 != h_13)))
              _fail(h_13);
            else
              f_13 = h_13;
            if(((e_13 != NULL) && (e_13 != i_13)))
              _fail(i_13);
            else
              e_13 = i_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_12);
      t = SSL_open_file(not_null(f_13), not_null(e_13));
    }
  else
    {
      t = o_12;
      {
        ATerm j_13 = NULL;
        ATerm k_13 = NULL;
        ATerm c_2 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = obsolete_1(t, c_2);
        {
          j_13 = t;
          {
            if(((f_13 != NULL) && (f_13 != j_13)))
              _fail(j_13);
            else
              f_13 = j_13;
            {
              ATerm y_12;
              y_12 = t;
              {
                ATerm l_13 = NULL;
                t = term_z_12;
                {
                  l_13 = t;
                  if(((k_13 != NULL) && (k_13 != l_13)))
                    _fail(l_13);
                  else
                    k_13 = l_13;
                }
              }
              t = y_12;
              t = SSL_open_file(not_null(f_13), not_null(k_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm t_13 = NULL;
  r_13 = t;
  {
    ATerm a_13;
    a_13 = t;
    {
      ATerm u_13 = NULL;
      t = term_c_13;
      {
        u_13 = t;
        if(((t_13 != NULL) && (t_13 != u_13)))
          _fail(u_13);
        else
          t_13 = u_13;
      }
    }
    t = a_13;
    {
      t = SSL_open_file(not_null(r_13), not_null(t_13));
      t = SSL_close_file(not_null(r_13));
    }
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm z_13 = NULL;
  t = term_d_13;
  {
    t = new_0(t);
    {
      z_13 = t;
      if(((y_13 != NULL) && (y_13 != z_13)))
        _fail(z_13);
      else
        y_13 = z_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_m_13);
    {
      t = conc_strings_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = new_file_0(t);
  {
    d_14 = t;
    {
      ATerm n_13;
      n_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_z_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_d_13);
            {
              ATerm e_2 (ATerm t)
              {
                t = term_o_13;
                return(t);
              }
              t = assert_1(t, e_2);
            }
          }
        }
      }
      t = n_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_stdin_0))
    {
      ATerm p_14 = NULL;
      ATerm q_14 = NULL;
      ATerm r_14 = NULL;
      t = xtc_new_file_0(t);
      {
        q_14 = t;
        {
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
          {
            ATerm s_14 = NULL;
            t = o_0(t);
            {
              s_14 = t;
              if(((r_14 != NULL) && (r_14 != s_14)))
                _fail(s_14);
              else
                r_14 = s_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_14)), term_p_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(p_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_14));
    }
  else
    {
      if(match_cons(n_14, sym_FILE_1))
        {
          o_14 = ATgetArgument(n_14, 0);
          {
            ATerm u_14 = NULL;
            ATerm v_14 = NULL;
            t = not_null(o_14);
            {
              ATerm w_14 = NULL;
              t = xtc_new_file_0(t);
              {
                v_14 = t;
                {
                  if(((u_14 != NULL) && (u_14 != v_14)))
                    _fail(v_14);
                  else
                    u_14 = v_14;
                  {
                    ATerm x_14 = NULL;
                    t = o_0(t);
                    {
                      x_14 = t;
                      if(((w_14 != NULL) && (w_14 != x_14)))
                        _fail(x_14);
                      else
                        w_14 = x_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_14)), term_p_13), not_null(o_14)), term_q_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_14);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_stdin_0))
    {
      ATerm k_15 = NULL,m_15 = NULL;
      ATerm s_13;
      s_13 = t;
      {
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
      }
      t = s_13;
      {
        ATerm n_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        t = not_null(m_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_FILE_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = r_57(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_16)), not_null(a_16));
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
                t = not_null(e_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = x_13;
          t = stdin_0(t);
        }
      LocalPopChoice(w_13);
      t = xtc_transform_file_2(t, w_77, x_77);
    }
  else
    {
      t = v_13;
      t = xtc_transform_term_2(t, w_77, x_77);
    }
  return(t);
}
ATerm xtc_sglr_2 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = term_b_14;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm n_16 = NULL,p_16 = NULL,r_16 = NULL;
    ATerm c_14;
    c_14 = t;
    {
      ATerm o_16 = NULL;
      t = term_d_13;
      {
        t = d_87(t);
        {
          t = xtc_find_0(t);
          {
            o_16 = t;
            if(((n_16 != NULL) && (n_16 != o_16)))
              _fail(o_16);
            else
              n_16 = o_16;
          }
        }
      }
    }
    t = c_14;
    {
      ATerm e_14;
      e_14 = t;
      {
        ATerm q_16 = NULL;
        t = term_d_13;
        {
          t = e_87(t);
          {
            q_16 = t;
            if(((p_16 != NULL) && (p_16 != q_16)))
              _fail(q_16);
            else
              p_16 = q_16;
          }
        }
      }
      t = e_14;
      {
        ATerm s_16 = NULL;
        t = term_d_13;
        {
          t = pass_v_verbose_0(t);
          {
            s_16 = t;
            if(((r_16 != NULL) && (r_16 != s_16)))
              _fail(s_16);
            else
              r_16 = s_16;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_16)), not_null(p_16)), term_h_14), not_null(n_16)), term_g_14), term_f_14);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, f_2, g_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym__2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      t = SSL_copy(not_null(z_16), not_null(a_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_stderr_0))
    {
      ATerm k_17 = NULL,m_17 = NULL;
      ATerm i_14;
      i_14 = t;
      {
        ATerm l_17 = NULL;
        t = SSLgetAnnotations(not_null(i_17));
        {
          l_17 = t;
          if(((k_17 != NULL) && (k_17 != l_17)))
            _fail(l_17);
          else
            k_17 = l_17;
        }
      }
      t = i_14;
      {
        ATerm n_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(k_17));
        {
          n_17 = t;
          if(((m_17 != NULL) && (m_17 != n_17)))
            _fail(n_17);
          else
            m_17 = n_17;
        }
        t = not_null(m_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_stdout_0))
    {
      ATerm x_17 = NULL,z_17 = NULL;
      ATerm j_14;
      j_14 = t;
      {
        ATerm y_17 = NULL;
        t = SSLgetAnnotations(not_null(v_17));
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
      }
      t = j_14;
      {
        ATerm a_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(x_17));
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
        t = not_null(z_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_FILE_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_18 = NULL;
            ATerm q_18 = NULL;
            t = m_0(t);
            {
              q_18 = t;
              {
                if(((p_18 != NULL) && (p_18 != q_18)))
                  _fail(q_18);
                else
                  p_18 = q_18;
                {
                  ATerm t_14 = t;
                  int y_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(y_14);
                    }
                  else
                    {
                      t = t_14;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(p_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_18));
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm z_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_18 = NULL;
                  ATerm t_18 = NULL;
                  t = m_0(t);
                  {
                    t_18 = t;
                    {
                      if(((s_18 != NULL) && (s_18 != t_18)))
                        _fail(t_18);
                      else
                        s_18 = t_18;
                      {
                        ATerm b_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_15 = t;
                            int d_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(d_15);
                              }
                            else
                              {
                                t = c_15;
                                {
                                  ATerm e_15 = t;
                                  int f_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(f_15);
                                    }
                                  else
                                    {
                                      t = e_15;
                                      {
                                        ATerm u_18 = NULL;
                                        u_18 = t;
                                        if(((n_18 != NULL) && (n_18 != u_18)))
                                          _fail(u_18);
                                        else
                                          n_18 = u_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(s_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_18));
                  ;
                  LocalPopChoice(a_15);
                }
              else
                {
                  t = z_14;
                  {
                    ATerm w_18 = NULL;
                    t = m_0(t);
                    {
                      w_18 = t;
                      if(((n_18 != NULL) && (n_18 != w_18)))
                        _fail(w_18);
                      else
                        n_18 = w_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_18));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  g_19 :
  if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
    {
      i_19 = ATgetFirst((ATermList) h_19);
      j_19 = (ATerm) ATgetNext((ATermList) h_19);
      t = not_null(j_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym__2))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      {
        ATerm g_15;
        g_15 = t;
        {
          ATerm v_19 = NULL;
          ATerm w_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_19), not_null(r_19));
          {
            ATerm j_15 = t;
            int o_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(o_15);
              }
            else
              {
                t = j_15;
                t = (ATerm) ATempty;
              }
            {
              w_19 = t;
              if(((v_19 != NULL) && (v_19 != w_19)))
                _fail(w_19);
              else
                v_19 = w_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_19), not_null(r_19), not_null(v_19));
            t = table_put_0(t);
          }
        }
        t = g_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL,m_20 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    ATerm n_20 = NULL;
    ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
    t = c_72(t);
    {
      n_20 = t;
      {
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), term_g_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            o_20 = t;
            h_20 :
            if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
              {
                p_20 = ATgetFirst((ATermList) o_20);
                q_20 = (ATerm) ATgetNext((ATermList) o_20);
                {
                  if(((j_20 != NULL) && (j_20 != p_20)))
                    _fail(p_20);
                  else
                    j_20 = p_20;
                  {
                    if(((i_20 != NULL) && (i_20 != q_20)))
                      _fail(q_20);
                    else
                      i_20 = q_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_20), term_g_12, not_null(i_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_20);
                          {
                            ATerm h_2 (ATerm t)
                            {
                              ATerm r_20 = NULL;
                              r_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(r_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, h_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = p_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_remove(not_null(c_21));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_63(t);
      t = i_63(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        t = i_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm h_21 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    ATerm i_21 = NULL;
    ATerm j_21 = NULL;
    t = b_72(t);
    {
      i_21 = t;
      {
        if(((h_21 != NULL) && (h_21 != i_21)))
          _fail(i_21);
        else
          h_21 = i_21;
        {
          ATerm k_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), term_g_12);
          {
            ATerm y_15 = t;
            int z_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_15);
              }
            else
              {
                t = y_15;
                t = (ATerm) ATempty;
              }
            {
              k_21 = t;
              if(((j_21 != NULL) && (j_21 != k_21)))
                _fail(k_21);
              else
                j_21 = k_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_21), term_g_12, (ATerm) ATinsert(CheckATermList(not_null(j_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL;
  ATerm i_2 (ATerm t)
  {
    t = term_o_13;
    return(t);
  }
  t = begin_scope_1(t, i_2);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm d_16;
      d_16 = t;
      {
        ATerm w_21 = NULL,b_22 = NULL,c_22 = NULL;
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_16;
            t = table_get_0(t);
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          w_21 = t;
          t_21 :
          if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
            {
              b_22 = ATgetFirst((ATermList) w_21);
              c_22 = (ATerm) ATgetNext((ATermList) w_21);
              {
                if(((v_21 != NULL) && (v_21 != b_22)))
                  _fail(b_22);
                else
                  v_21 = b_22;
                {
                  if(((u_21 != NULL) && (u_21 != c_22)))
                    _fail(c_22);
                  else
                    u_21 = c_22;
                  {
                    t = not_null(v_21);
                    {
                      ATerm k_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, k_2);
                    }
                  }
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      }
      t = d_16;
      {
        ATerm l_2 (ATerm t)
        {
          t = term_o_13;
          return(t);
        }
        t = end_scope_1(t, l_2);
      }
      return(t);
    }
    t = restore_always_2(t, g_77, j_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL;
        ATerm o_22 = NULL;
        t = term_q_13;
        {
          t = get_config_0(t);
          {
            o_22 = t;
            if(((n_22 != NULL) && (n_22 != o_22)))
              _fail(o_22);
            else
              n_22 = o_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_22));
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = term_q_11;
      }
    {
      t = h_77(t);
      {
        ATerm n_2 (ATerm t)
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_p_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              t = term_t_16;
            }
          return(t);
        }
        t = copy_to_1(t, n_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, m_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm s_22 = NULL;
    s_22 = t;
    r_22 :
    if(!(match_string(s_22, "-v")))
      {
        if(!(match_string(s_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_u_16;
    t = set_config_0(t);
    t = term_v_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  t = Option_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm v_22 = NULL;
    v_22 = t;
    t_22 :
    if(!(match_string(v_22, "-k")))
      {
        if(!(match_string(v_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm w_22 = NULL;
      ATerm x_22 = NULL;
      t = string_to_int_0(t);
      {
        x_22 = t;
        if(((w_22 != NULL) && (w_22 != x_22)))
          _fail(x_22);
        else
          w_22 = x_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(w_22));
        t = set_config_0(t);
      }
    }
    t = b_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  t = ArgOption_3(t, r_2, v_2, w_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_string_to_int(not_null(a_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm i_23 = NULL;
        i_23 = t;
        d_23 :
        if(!(match_string(i_23, "-S")))
          {
            if(!(match_string(i_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_j_17;
        t = set_config_0(t);
        t = term_o_17;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_p_17;
        return(t);
      }
      t = Option_3(t, x_2, y_2, z_2);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm j_23 = NULL;
              j_23 = t;
              e_23 :
              if(!(match_string(j_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm m_23 = NULL;
              ATerm s_17;
              s_17 = t;
              {
                ATerm k_23 = NULL;
                ATerm l_23 = NULL;
                t = string_to_int_0(t);
                {
                  l_23 = t;
                  if(((k_23 != NULL) && (k_23 != l_23)))
                    _fail(l_23);
                  else
                    k_23 = l_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(k_23));
                  t = set_config_0(t);
                }
              }
              t = s_17;
              {
                ATerm n_23 = NULL;
                n_23 = t;
                if(((m_23 != NULL) && (m_23 != n_23)))
                  _fail(n_23);
                else
                  m_23 = n_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_23));
              }
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_t_17;
              return(t);
            }
            t = ArgOption_3(t, a_3, d_3, e_3);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            {
              ATerm g_3 (ATerm t)
              {
                ATerm o_23 = NULL;
                o_23 = t;
                h_23 :
                if(!(match_string(o_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = term_w_17;
                t = set_config_0(t);
                t = term_b_18;
                return(t);
              }
              ATerm i_3 (ATerm t)
              {
                t = term_c_18;
                return(t);
              }
              t = Option_3(t, g_3, h_3, i_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm u_23 = NULL;
    u_23 = t;
    r_23 :
    if(!(match_string(u_23, "-o")))
      {
        if(!(match_string(u_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm x_23 = NULL;
    ATerm h_18;
    h_18 = t;
    {
      ATerm v_23 = NULL;
      ATerm w_23 = NULL;
      w_23 = t;
      if(((v_23 != NULL) && (v_23 != w_23)))
        _fail(w_23);
      else
        v_23 = w_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(v_23));
        t = set_config_0(t);
      }
    }
    t = h_18;
    {
      ATerm y_23 = NULL;
      y_23 = t;
      if(((x_23 != NULL) && (x_23 != y_23)))
        _fail(y_23);
      else
        x_23 = y_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_23));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_i_18;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, m_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm h_24 = NULL;
          h_24 = t;
          g_24 :
          if(!(match_string(h_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_r_18;
          t = set_config_0(t);
          t = term_v_18;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_x_18;
          return(t);
        }
        t = Option_3(t, o_3, r_3, s_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  n_24 = t;
  l_24 :
  if(match_string(n_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
        {
          o_24 = ATgetFirst((ATermList) n_24);
          p_24 = (ATerm) ATgetNext((ATermList) n_24);
          m_24 :
          if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
            {
              q_24 = ATgetFirst((ATermList) p_24);
              r_24 = (ATerm) ATgetNext((ATermList) p_24);
              {
                ATerm z_24 = NULL;
                ATerm y_18;
                y_18 = t;
                {
                  t = not_null(o_24);
                  t = j_0(t);
                }
                t = y_18;
                {
                  ATerm a_25 = NULL;
                  t = not_null(q_24);
                  {
                    t = k_0(t);
                    {
                      a_25 = t;
                      if(((z_24 != NULL) && (z_24 != a_25)))
                        _fail(a_25);
                      else
                        z_24 = a_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_24)), not_null(z_24));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm h_25 = NULL;
    h_25 = t;
    e_25 :
    if(!(match_string(h_25, "-i")))
      {
        if(!(match_string(h_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm k_25 = NULL;
    ATerm z_18;
    z_18 = t;
    {
      ATerm i_25 = NULL;
      ATerm j_25 = NULL;
      j_25 = t;
      if(((i_25 != NULL) && (i_25 != j_25)))
        _fail(j_25);
      else
        i_25 = j_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(i_25));
        t = set_config_0(t);
      }
    }
    t = z_18;
    {
      ATerm l_25 = NULL;
      l_25 = t;
      if(((k_25 != NULL) && (k_25 != l_25)))
        _fail(l_25);
      else
        k_25 = l_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_25));
    }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_a_19;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, x_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_25 = NULL;
  ATerm f_19;
  f_19 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm r_25 = NULL,s_25 = NULL;
      r_25 = t;
      p_25 :
      if(match_cons(r_25, sym_Program_1))
        {
          s_25 = ATgetArgument(r_25, 0);
          if(((q_25 != NULL) && (q_25 != s_25)))
            _fail(s_25);
          else
            q_25 = s_25;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_19), not_null(q_25)), term_k_19));
      {
        t = printnl_0(t);
        {
          t = term_n_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATempty, term_m_19));
  {
    t = printnl_0(t);
    {
      t = term_n_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = SSL_TicksToSeconds(not_null(v_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym__2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      {
        ATerm n_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_26), not_null(c_26));
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = n_19;
            t = SSL_addr(not_null(b_26), not_null(c_26));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_70(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
        j_26 = t;
        i_26 :
        if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
          {
            k_26 = ATgetFirst((ATermList) j_26);
            l_26 = (ATerm) ATgetNext((ATermList) j_26);
            {
              ATerm o_26 = NULL;
              ATerm p_26 = NULL;
              t = not_null(l_26);
              {
                t = foldr_2(t, u_70, v_70);
                {
                  p_26 = t;
                  if(((o_26 != NULL) && (o_26 != p_26)))
                    _fail(p_26);
                  else
                    o_26 = p_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(o_26));
                t = v_70(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm s_69 (ATerm), ATerm t_69 (ATerm))
{
  ATerm w_26 = NULL;
  ATerm y_26 = NULL;
  w_26 = t;
  {
    ATerm z_26 = NULL;
    ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
    t = not_null(w_26);
    {
      z_26 = t;
      {
        t = SSL_explode_term(not_null(z_26));
        {
          b_27 = t;
          v_26 :
          if(match_cons(b_27, sym__2))
            {
              c_27 = ATgetArgument(b_27, 0);
              d_27 = ATgetArgument(b_27, 1);
              if(((y_26 != NULL) && (y_26 != d_27)))
                _fail(d_27);
              else
                y_26 = d_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_26);
      t = foldr_2(t, s_69, t_69);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      t = term_g_17;
      return(t);
    }
    t = crush_2(t, b_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm x_19;
        x_19 = t;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_27), not_null(l_27));
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              t = SSL_gtr(not_null(k_27), not_null(l_27));
            }
        }
        t = x_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
      s_27 = t;
      q_27 :
      if(match_cons(s_27, sym__2))
        {
          t_27 = ATgetArgument(s_27, 0);
          u_27 = ATgetArgument(s_27, 1);
          {
            if(((r_27 != NULL) && (r_27 != t_27)))
              _fail(t_27);
            else
              r_27 = t_27;
            if(((r_27 != NULL) && (r_27 != u_27)))
              _fail(u_27);
            else
              r_27 = u_27;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm c_20;
    c_20 = t;
    {
      ATerm x_27 = NULL;
      ATerm y_27 = NULL;
      t = term_g_7;
      {
        t = get_config_0(t);
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), term_n_7);
        t = geq_0(t);
      }
    }
    t = c_20;
    t = l_59(t);
    return(t);
  }
  t = try_1(t, c_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm c_28 = NULL,e_28 = NULL;
    ATerm d_20;
    d_20 = t;
    {
      ATerm d_28 = NULL;
      t = run_time_0(t);
      {
        d_28 = t;
        if(((c_28 != NULL) && (c_28 != d_28)))
          _fail(d_28);
        else
          c_28 = d_28;
      }
    }
    t = d_20;
    {
      ATerm f_28 = NULL;
      t = term_e_20;
      {
        t = get_config_0(t);
        {
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_20), not_null(c_28)), term_f_20), not_null(e_28)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_4);
  {
    t = term_g_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Version_0))
    {
      ATerm o_28 = NULL,q_28 = NULL;
      ATerm k_20;
      k_20 = t;
      {
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(m_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      t = k_20;
      {
        ATerm r_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_28));
        {
          r_28 = t;
          if(((q_28 != NULL) && (q_28 != r_28)))
            _fail(r_28);
          else
            q_28 = r_28;
        }
        t = not_null(q_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm l_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = l_20;
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, h_4);
  t = k_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = SSL_table_create(not_null(w_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  {
    ATerm v_20;
    v_20 = t;
    {
      t = term_w_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_20, term_x_20, not_null(a_29));
          t = table_put_0(t);
        }
      }
    }
    t = v_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_table_destroy(not_null(e_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = SSL_exit(not_null(i_29));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,r_29 = NULL;
  n_29 = t;
  m_29 :
  if(((ATgetType(n_29) == AT_LIST) && ATisEmpty(n_29)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
        {
          o_29 = ATgetFirst((ATermList) n_29);
          r_29 = (ATerm) ATgetNext((ATermList) n_29);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm y_20;
  y_20 = t;
  {
    ATerm x_29 = NULL;
    ATerm a_30 = NULL;
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm y_29 = NULL;
          ATerm z_29 = NULL;
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
          t = (ATerm) ATinsert(ATempty, not_null(y_29));
        }
      }
    {
      a_30 = t;
      if(((x_29 != NULL) && (x_29 != a_30)))
        _fail(a_30);
      else
        x_29 = a_30;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, not_null(x_29));
      t = printnl_0(t);
    }
  }
  t = y_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,n_30 = NULL;
  n_30 = t;
  i_30 :
  if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
    {
      j_30 = ATgetFirst((ATermList) n_30);
      k_30 = (ATerm) ATgetNext((ATermList) n_30);
      {
        ATerm q_30 = NULL;
        t = not_null(k_30);
        {
          ATerm b_21;
          b_21 = t;
          {
            ATerm r_30 = NULL,t_30 = NULL,v_30 = NULL;
            ATerm d_21;
            d_21 = t;
            {
              ATerm s_30 = NULL;
              t = i_0(t);
              {
                s_30 = t;
                if(((r_30 != NULL) && (r_30 != s_30)))
                  _fail(s_30);
                else
                  r_30 = s_30;
              }
            }
            t = d_21;
            {
              ATerm u_30 = NULL;
              t = not_null(j_30);
              {
                t = g_0(t);
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_30)), not_null(t_30));
                {
                  v_30 = t;
                  if(((q_30 != NULL) && (q_30 != v_30)))
                    _fail(v_30);
                  else
                    q_30 = v_30;
                }
              }
            }
          }
          t = b_21;
          {
            ATerm p_4 (ATerm t)
            {
              t = not_null(q_30);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_30) == AT_LIST) && ATisEmpty(n_30)))
        {
          {
            t = term_d_13;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Program_1))
    {
      h_31 = ATgetArgument(g_31, 0);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(g_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(h_31);
          {
            ATerm o_31 = NULL;
            t = y_57(t);
            {
              m_31 = t;
              {
                ATerm p_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_31)), not_null(k_31));
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
                t = not_null(o_31);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm y_31 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_31 = NULL;
      t = term_e_20;
      {
        t = get_config_0(t);
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
      }
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm a_32 = NULL;
            a_32 = t;
            if(((y_31 != NULL) && (y_31 != a_32)))
              _fail(a_32);
            else
              y_31 = a_32;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = option_defined_1(t, r_4);
      }
    }
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(y_31);
        return(t);
      }
      t = short_description_1(t, z_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_4);
    {
      t = term_g_21;
      {
        t = echo_0(t);
        {
          t = term_n_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm b_32 = NULL;
                  ATerm c_32 = NULL;
                  c_32 = t;
                  if(((b_32 != NULL) && (b_32 != c_32)))
                    _fail(c_32);
                  else
                    b_32 = c_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_32)), term_o_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_5);
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm d_32 = NULL;
                    ATerm e_32 = NULL;
                    ATerm g_5 (ATerm t)
                    {
                      t = not_null(y_31);
                      return(t);
                    }
                    t = long_description_1(t, g_5);
                    {
                      e_32 = t;
                      if(((d_32 != NULL) && (d_32 != e_32)))
                        _fail(e_32);
                      else
                        d_32 = e_32;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_32)), term_p_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_5);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm q_21;
  q_21 = t;
  {
    ATerm m_32 = NULL;
    ATerm n_32 = NULL;
    n_32 = t;
    if(((m_32 != NULL) && (m_32 != n_32)))
      _fail(n_32);
    else
      m_32 = n_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATempty, not_null(m_32)));
      t = printnl_0(t);
    }
  }
  t = q_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm r_21;
  r_21 = t;
  {
    t = n_72(t);
    t = debug_0(t);
  }
  t = r_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  v_32 :
  if(match_cons(y_32, sym_Undefined_1))
    {
      z_32 = ATgetArgument(y_32, 0);
      {
        ATerm c_33 = NULL,e_33 = NULL;
        ATerm d_33 = NULL;
        t = SSLgetAnnotations(not_null(y_32));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
        {
          t = not_null(z_32);
          {
            ATerm g_33 = NULL;
            t = z_57(t);
            {
              e_33 = t;
              {
                ATerm h_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_33)), not_null(c_33));
                {
                  h_33 = t;
                  if(((g_33 != NULL) && (g_33 != h_33)))
                    _fail(h_33);
                  else
                    g_33 = h_33;
                }
                t = not_null(g_33);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm m_33 (ATerm t)
  {
    ATerm s_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_64, _id);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = s_21;
        t = Cons_2(t, _id, m_33);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_79 (ATerm))
{
  t = fetch_1(t, r_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_Help_0))
    {
      ATerm v_33 = NULL,i_34 = NULL;
      ATerm y_21;
      y_21 = t;
      {
        ATerm h_34 = NULL;
        t = SSLgetAnnotations(not_null(t_33));
        {
          h_34 = t;
          if(((v_33 != NULL) && (v_33 != h_34)))
            _fail(h_34);
          else
            v_33 = h_34;
        }
      }
      t = y_21;
      {
        ATerm j_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_33));
        {
          j_34 = t;
          if(((i_34 != NULL) && (i_34 != j_34)))
            _fail(j_34);
          else
            i_34 = j_34;
        }
        t = not_null(i_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  t = SSL_implode_string(not_null(s_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
        c_35 = t;
        y_34 :
        if(((ATgetType(c_35) == AT_LIST) && !(ATisEmpty(c_35))))
          {
            d_35 = ATgetFirst((ATermList) c_35);
            e_35 = (ATerm) ATgetNext((ATermList) c_35);
            {
              t = not_null(d_35);
              {
                ATerm l_5 (ATerm t)
                {
                  t = not_null(e_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_5);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm o_35 = NULL;
  ATerm q_35 = NULL;
  o_35 = t;
  {
    ATerm r_35 = NULL;
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
    t = not_null(o_35);
    {
      r_35 = t;
      {
        t = SSL_explode_term(not_null(r_35));
        {
          t_35 = t;
          m_35 :
          if(match_cons(t_35, sym__2))
            {
              u_35 = ATgetArgument(t_35, 0);
              v_35 = ATgetArgument(t_35, 1);
              n_35 :
              if(match_string(u_35, ""))
                {
                  if(((q_35 != NULL) && (q_35 != v_35)))
                    _fail(v_35);
                  else
                    q_35 = v_35;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm z_35 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_35);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          t = Nil_0(t);
          t = z_64(t);
        }
      }
    return(t);
  }
  t = z_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        t = not_null(d_36);
        {
          ATerm m_5 (ATerm t)
          {
            t = not_null(e_36);
            return(t);
          }
          t = at_end_1(t, m_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_explode_string(not_null(j_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
  s_36 = t;
  r_36 :
  if(match_cons(s_36, sym__2))
    {
      t_36 = ATgetArgument(s_36, 0);
      u_36 = ATgetArgument(s_36, 1);
      {
        ATerm y_36 = NULL,a_37 = NULL;
        ATerm z_36 = NULL;
        t = SSLgetAnnotations(not_null(s_36));
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
        {
          t = not_null(t_36);
          {
            ATerm c_37 = NULL;
            t = c_51(t);
            {
              a_37 = t;
              {
                t = not_null(u_36);
                {
                  ATerm e_37 = NULL;
                  t = d_51(t);
                  {
                    c_37 = t;
                    {
                      ATerm f_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_37), not_null(c_37)), not_null(y_36));
                      {
                        f_37 = t;
                        if(((e_37 != NULL) && (e_37 != f_37)))
                          _fail(f_37);
                        else
                          e_37 = f_37;
                      }
                      t = not_null(e_37);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym__2))
    {
      o_37 = ATgetArgument(n_37, 0);
      p_37 = ATgetArgument(n_37, 1);
      {
        ATerm h_22;
        h_22 = t;
        t = SSL_printnl(not_null(o_37), not_null(p_37));
        t = h_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm i_22;
  i_22 = t;
  {
    ATerm v_37 = NULL,x_37 = NULL;
    ATerm j_22;
    j_22 = t;
    {
      ATerm w_37 = NULL;
      t = m_72(t);
      {
        w_37 = t;
        if(((v_37 != NULL) && (v_37 != w_37)))
          _fail(w_37);
        else
          v_37 = w_37;
      }
    }
    t = j_22;
    {
      ATerm y_37 = NULL;
      y_37 = t;
      if(((x_37 != NULL) && (x_37 != y_37)))
        _fail(y_37);
      else
        x_37 = y_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), not_null(v_37)));
        t = printnl_0(t);
      }
    }
  }
  t = i_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm b_38 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = Cons_2(t, k_64, b_38);
      }
    return(t);
  }
  t = b_38(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = SSL_is_string(not_null(d_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = m_22;
      {
        ATerm q_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_5);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = q_22;
            {
              ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
              m_38 = t;
              l_38 :
              if(match_cons(m_38, sym_Path_1))
                {
                  n_38 = ATgetArgument(m_38, 0);
                  t = not_null(n_38);
                }
              else
                {
                  if(match_cons(m_38, sym_Var_1))
                    {
                      n_38 = ATgetArgument(m_38, 0);
                      {
                        t = not_null(n_38);
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm r_5 (ATerm t)
                                {
                                  t = term_b_23;
                                  return(t);
                                }
                                t = debug_1(t, r_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_38, sym_Prefix_2))
                        {
                          n_38 = ATgetArgument(m_38, 0);
                          o_38 = ATgetArgument(m_38, 1);
                          {
                            ATerm t_38 = NULL,v_38 = NULL;
                            ATerm c_23;
                            c_23 = t;
                            {
                              ATerm u_38 = NULL;
                              t = not_null(n_38);
                              {
                                t = eval_config_0(t);
                                {
                                  u_38 = t;
                                  if(((t_38 != NULL) && (t_38 != u_38)))
                                    _fail(u_38);
                                  else
                                    t_38 = u_38;
                                }
                              }
                            }
                            t = c_23;
                            {
                              ATerm w_38 = NULL;
                              t = not_null(o_38);
                              {
                                t = eval_config_0(t);
                                {
                                  w_38 = t;
                                  if(((v_38 != NULL) && (v_38 != w_38)))
                                    _fail(w_38);
                                  else
                                    v_38 = w_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), not_null(v_38));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_23, not_null(e_39));
    {
      t = table_get_0(t);
      {
        ATerm s_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_23;
            g_23 = t;
            {
              ATerm g_39 = NULL;
              ATerm h_39 = NULL;
              h_39 = t;
              if(((g_39 != NULL) && (g_39 != h_39)))
                _fail(h_39);
              else
                g_39 = h_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_23, not_null(e_39), not_null(g_39));
                t = table_put_0(t);
              }
            }
            t = g_23;
          }
          return(t);
        }
        t = try_1(t, s_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_62(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  m_39 = t;
  l_39 :
  if(match_cons(m_39, sym__2))
    {
      n_39 = ATgetArgument(m_39, 0);
      o_39 = ATgetArgument(m_39, 1);
      t = SSL_table_get(not_null(n_39), not_null(o_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym__3))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      c_40 = ATgetArgument(z_39, 2);
      {
        ATerm s_23;
        s_23 = t;
        {
          ATerm g_40 = NULL;
          ATerm h_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_40), not_null(b_40));
          {
            ATerm t_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_23);
              }
            else
              {
                t = t_23;
                t = (ATerm) ATempty;
              }
            {
              h_40 = t;
              if(((g_40 != NULL) && (g_40 != h_40)))
                _fail(h_40);
              else
                g_40 = h_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_40), not_null(b_40), (ATerm) ATinsert(CheckATermList(not_null(g_40)), not_null(c_40)));
            t = table_put_0(t);
          }
        }
        t = s_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_80 (ATerm))
{
  ATerm l_40 = NULL;
  ATerm m_40 = NULL;
  t = term_d_13;
  {
    t = w_80(t);
    {
      m_40 = t;
      if(((l_40 != NULL) && (l_40 != m_40)))
        _fail(m_40);
      else
        l_40 = m_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_21, term_m_21, not_null(l_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_string(s_40, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_40) == AT_LIST) && !(ATisEmpty(s_40))))
        {
          t_40 = ATgetFirst((ATermList) s_40);
          u_40 = (ATerm) ATgetNext((ATermList) s_40);
          {
            ATerm x_40 = NULL;
            ATerm a_24;
            a_24 = t;
            {
              t = not_null(t_40);
              t = a_0(t);
            }
            t = a_24;
            {
              ATerm y_40 = NULL;
              t = term_d_13;
              {
                t = c_0(t);
                {
                  y_40 = t;
                  if(((x_40 != NULL) && (x_40 != y_40)))
                    _fail(y_40);
                  else
                    x_40 = y_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_40)), not_null(x_40));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm d_41 = NULL;
    d_41 = t;
    c_41 :
    if(!(match_string(d_41, "--help")))
      {
        if(!(match_string(d_41, "-h")))
          {
            if(!(match_string(d_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_c_24;
    {
      t = set_config_0(t);
      t = term_d_24;
    }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_e_24;
    return(t);
  }
  t = Option_3(t, v_5, w_5, b_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  f_41 :
  if(((ATgetType(g_41) == AT_LIST) && !(ATisEmpty(g_41))))
    {
      h_41 = ATgetFirst((ATermList) g_41);
      i_41 = (ATerm) ATgetNext((ATermList) g_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  r_41 :
  if(((ATgetType(s_41) == AT_LIST) && !(ATisEmpty(s_41))))
    {
      t_41 = ATgetFirst((ATermList) s_41);
      u_41 = (ATerm) ATgetNext((ATermList) s_41);
      {
        ATerm y_41 = NULL,a_42 = NULL;
        ATerm z_41 = NULL;
        t = SSLgetAnnotations(not_null(s_41));
        {
          z_41 = t;
          if(((y_41 != NULL) && (y_41 != z_41)))
            _fail(z_41);
          else
            y_41 = z_41;
        }
        {
          t = not_null(t_41);
          {
            ATerm c_42 = NULL;
            t = l_52(t);
            {
              a_42 = t;
              {
                t = not_null(u_41);
                {
                  ATerm e_42 = NULL;
                  t = m_52(t);
                  {
                    c_42 = t;
                    {
                      ATerm h_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_42)), not_null(a_42)), not_null(y_41));
                      {
                        h_42 = t;
                        if(((e_42 != NULL) && (e_42 != h_42)))
                          _fail(h_42);
                        else
                          e_42 = h_42;
                      }
                      t = not_null(e_42);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  s_42 :
  if(((ATgetType(t_42) == AT_LIST) && ATisEmpty(t_42)))
    {
      {
        ATerm v_42 = NULL,x_42 = NULL;
        ATerm f_24;
        f_24 = t;
        {
          ATerm w_42 = NULL;
          t = SSLgetAnnotations(not_null(t_42));
          {
            w_42 = t;
            if(((v_42 != NULL) && (v_42 != w_42)))
              _fail(w_42);
            else
              v_42 = w_42;
          }
        }
        t = f_24;
        {
          ATerm a_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_42));
          {
            a_43 = t;
            if(((x_42 != NULL) && (x_42 != a_43)))
              _fail(a_43);
            else
              x_42 = a_43;
          }
          t = not_null(x_42);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_43 = NULL,m_43 = NULL,n_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym__2))
    {
      m_43 = ATgetArgument(g_43, 0);
      n_43 = ATgetArgument(g_43, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_23, not_null(m_43), not_null(n_43));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm i_24;
  i_24 = t;
  {
    ATerm c_6 (ATerm t)
    {
      t = term_j_24;
      t = u_80(t);
      return(t);
    }
    t = try_1(t, c_6);
  }
  t = i_24;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm v_43 = NULL;
      ATerm k_24;
      k_24 = t;
      {
        ATerm t_43 = NULL;
        ATerm u_43 = NULL;
        u_43 = t;
        if(((t_43 != NULL) && (t_43 != u_43)))
          _fail(u_43);
        else
          t_43 = u_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, not_null(t_43));
          t = set_config_0(t);
        }
      }
      t = k_24;
      {
        ATerm g_44 = NULL;
        g_44 = t;
        if(((v_43 != NULL) && (v_43 != g_44)))
          _fail(g_44);
        else
          v_43 = g_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_43));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              {
                t = u_80(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          ;
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,s_44 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm t_44 = NULL,u_44 = NULL,y_44 = NULL,a_45 = NULL;
    t_44 = t;
    o_44 :
    if(match_cons(t_44, sym__3))
      {
        u_44 = ATgetArgument(t_44, 0);
        y_44 = ATgetArgument(t_44, 1);
        a_45 = ATgetArgument(t_44, 2);
        {
          if(((p_44 != NULL) && (p_44 != u_44)))
            _fail(u_44);
          else
            p_44 = u_44;
          {
            if(((q_44 != NULL) && (q_44 != y_44)))
              _fail(y_44);
            else
              q_44 = y_44;
            {
              if(((s_44 != NULL) && (s_44 != a_45)))
                _fail(a_45);
              else
                s_44 = a_45;
              t = SSL_table_put(not_null(p_44), not_null(q_44), not_null(s_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm d_45 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    t = term_y_24;
    t = table_put_0(t);
  }
  t = x_24;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm b_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_80(t);
          ;
          LocalPopChoice(c_25);
        }
      else
        {
          t = b_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm d_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_25;
            g_25 = t;
            {
              ATerm m_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_24;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_25);
                }
              else
                {
                  t = m_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_25;
            {
              t = system_usage_0(t);
              {
                t = term_g_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = d_25;
            {
              ATerm m_6 (ATerm t)
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm e_45 = NULL;
                  e_45 = t;
                  if(((d_45 != NULL) && (d_45 != e_45)))
                    _fail(e_45);
                  else
                    d_45 = e_45;
                  return(t);
                }
                t = Undefined_1(t, n_6);
                return(t);
              }
              t = option_defined_1(t, m_6);
              {
                ATerm o_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_45)), term_o_25);
                  return(t);
                }
                t = say_1(t, o_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_6);
      {
        ATerm t_25;
        t_25 = t;
        {
          t = term_l_21;
          t = table_destroy_0(t);
        }
        t = t_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm))
{
  t = parse_options_1(t, q_78);
  {
    t = store_options_0(t);
    {
      t = s_78(t);
      {
        ATerm u_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_78);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = u_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  t = option_wrap_4(t, u_78, default_usage_0, _id, v_78);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_77(t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = xtc_io_1(t, m_77);
    return(t);
  }
  t = option_wrap_2(t, p_6, u_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm k_77 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, k_77);
  return(t);
}
ATerm io_parse_pp_table_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      t = term_f_26;
      return(t);
    }
    ATerm y_6 (ATerm t)
    {
      t = term_g_26;
      return(t);
    }
    t = xtc_sglr_2(t, w_6, y_6);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_1(t, v_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_pp_table_0(t);
  return(t);
}
