// 函数: sub_577f10
// 地址: 0x577f10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b474b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14
int32_t** result = sub_578410(arg1 + 0x3680, &var_14, arg1 + 0x36a0)
int32_t* ebx = var_14

if (ebx != *(arg1 + 0x3680))
    int32_t* eax_4
    int32_t* ecx_1
    eax_4, ecx_1 = sub_745f3f(0x4bc)
    int32_t* esi_1 = eax_4
    var_14 = esi_1
    int32_t var_8_1 = 0
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        ecx_1 = sub_575670(esi_1)
        *esi_1 = &C_db_wnd_info_element_lv::`vftable'{for `C_db_wnd_info_listview'}
        esi_1[0x124] = 0
        esi_1[0x12b] = 7
        esi_1[0x12a] = 0
        esi_1[0x126].w = 0
    
    int32_t* var_1c = esi_1
    int32_t* var_18 = nullptr
    int32_t var_8_2 = 1
    int32_t* var_30_1 = &var_18
    sub_579730(&var_18, esi_1, ecx_1)
    int32_t var_8_3 = 2
    sub_578460(arg1 + 0x3694, &var_1c)
    __builtin_memcpy(&var_1c[0x105], &ebx[5], 0x80)
    var_1c[0x125] = ebx[0x25]
    int32_t* edx_2 = var_1c
    
    if (&edx_2[0x126] != &ebx[0x28])
        sub_52e3c0(&edx_2[0x126], &ebx[0x28], 0, 0xffffffff)
        edx_2 = var_1c
    
    edx_2[0x12c] = ebx[0x26]
    var_1c[0x12d] = ebx[0x27]
    var_1c[0x12e].b = 1
    (*(*var_1c + 0x10))(data_4ebe3ac)
    int32_t* ecx_8 = var_1c
    sub_6c1b50(ecx_8, &ecx_8[0x126])
    int32_t* ecx_9 = var_1c
    result = sub_57a800(&ecx_9[0x38], ecx_9[0x12e].b, ecx_9[0x125], &ecx_9[0x38])
    int32_t var_8_4 = 0xffffffff
    int32_t* esi_3 = var_18
    
    if (esi_3 != 0)
        bool cond:0_1 = esi_3[1] != 1
        result = esi_3[1]
        esi_3[1] -= 1
        
        if (not(cond:0_1))
            (*(*esi_3 + 4))(eax_2)
            result = &esi_3[2]
            int32_t* edi_3 = *result
            *result -= 1
            
            if (edi_3 == 1)
                result = (*(*esi_3 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
