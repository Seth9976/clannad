// 函数: sub_675470
// 地址: 0x675470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6c70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = arg3
void* ecx = data_bac460
void* eax_5 = sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1)
int32_t esi_2 = (*(eax_5 + 0x148) - *(eax_5 + 0x144)) s/ 0x16c
int32_t var_dc_2 = sub_5b7320(eax_5 + 0xa0, esi_2 + 1)
void* eax_8 = sub_675ce0(eax_5 + 0xa4, esi_2)
struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_int_list> >::VTable
    *** result = result_1
*(eax_8 + 0x164) = *(data_bac45c + 0x64)
*(eax_8 + 0x168) = arg2
*(eax_8 + 4) = result
void var_16c
void var_c8
int32_t var_30
int32_t var_1c

if (result == 0xb)
    struct C_elm_list<int32_t>::C_elm_int_list::VTable** eax_9
    struct C_elm_list<int32_t>::C_elm_int_list::VTable** ecx_9
    eax_9, ecx_9 = sub_745f3f(0xb8)
    struct C_elm_list<int32_t>::C_elm_int_list::VTable** eax_10
    
    if (eax_9 == 0)
        eax_10 = nullptr
    else
        ecx_9 = eax_9
        eax_10 = sub_553e40(ecx_9)
    
    struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_38 = eax_10
    result_1 = nullptr
    int32_t var_8_1 = 0
    int32_t* var_dc_4 = &result_1
    sub_5bf1a0(eax_10, eax_10, ecx_9)
    int32_t var_8_2 = 1
    int32_t var_dc_6 = sub_698540(&var_30, *(eax_8 + 0x164), *(eax_8 + 0x168))
    int32_t var_e0_3 = 1
    int32_t var_e4_2 = arg4
    var_8_2.b = 2
    int32_t* var_e8_1 = &var_30
    int32_t var_4c_1 = 0
    __builtin_memcpy(&var_16c, &var_c8, 0x80)
    sub_5c3640(var_38)
    sub_5beb80(eax_8 + 0x160, &var_38)
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    int32_t var_8_3 = 0xffffffff
    int32_t* result_2 = result_1
    
    if (result_2 != 0)
        bool cond:0_1 = result_2[1] != 1
        result_2[1]
        result_2[1] -= 1
        
        if (not(cond:0_1))
            (*(*result_2 + 4))(eax_2)
            struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_int_list> >::VTable
                ** edi_1 = result_2[2]
            result_2[2] -= 1
            
            if (edi_1 == 1)
                (*(*result_2 + 8))()
else if (result == 0x15)
    struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** eax_13
    struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** ecx_17
    eax_13, ecx_17 = sub_745f3f(0xb8)
    struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** eax_14
    
    if (eax_13 == 0)
        eax_14 = nullptr
    else
        ecx_17 = eax_13
        eax_14 = sub_5b7840(ecx_17)
    
    struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** var_40 =
        eax_14
    int32_t var_3c = 0
    int32_t var_8_4 = 3
    int32_t* var_dc_10 = &var_3c
    sub_5bf210(eax_14, eax_14, ecx_17)
    int32_t var_8_5 = 4
    int32_t var_dc_12 = sub_698540(&var_30, *(eax_8 + 0x164), *(eax_8 + 0x168))
    int32_t var_e0_5 = 1
    int32_t var_e4_4 = arg4
    var_8_5.b = 5
    int32_t* var_e8_2 = &var_30
    int32_t var_4c_2 = 0
    __builtin_memcpy(&var_16c, &var_c8, 0x80)
    sub_5c36c0(var_40)
    sub_5bebe0(eax_8 + 0x160, &var_40)
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    int32_t var_8_6 = 0xffffffff
    sub_54b010(&var_40)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
