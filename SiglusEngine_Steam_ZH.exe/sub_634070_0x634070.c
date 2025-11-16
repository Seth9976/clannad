// 函数: sub_634070
// 地址: 0x634070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1569
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
int32_t var_20 = arg2
void* eax_3 = arg3
void* var_1c = arg3
struct C_elm_list<class C_tnm_prop>::C_tnm_prop_list::VTable** result = arg4
struct C_elm_list<class C_tnm_prop>::C_tnm_prop_list::VTable** result_2 = result
int32_t var_8_1 = 0

while (eax_3 != arg2)
    struct C_elm_list<class C_tnm_prop>::C_tnm_prop_list::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        void* esi_1
        
        if (eax_3 == 0)
            esi_1 = nullptr
        else
            esi_1 = eax_3 + 4
        
        void* var_2c_1 = &result[1]
        __builtin_memcpy(&result[1], esi_1, 0x80)
        result[0x21] = *(esi_1 + 0x80)
        result[0x27] = 7
        result[0x26] = 0
        result[0x22].w = 0
        sub_52e3c0(&result[0x22], esi_1 + 0x84, 0, 0xffffffff)
        result[0x28] = *(esi_1 + 0x9c)
        var_8_1.b = 2
        sub_54d2e0(&result[0x29], esi_1 + 0xa0)
        arg2 = var_20
        result[0x2c] = *(esi_1 + 0xac)
        int32_t eax_8
        eax_8.b = *(esi_1 + 0xb0)
        result[0x2d].b = eax_8.b
        eax_3 = var_1c
        *result = &C_tnm_prop_list::`vftable'{for `C_elm_list<class C_tnm_prop>'}
    
    result = &result[0x2e]
    var_8_1.b = 0
    eax_3 += 0xb8
    arg4 = result
    var_1c = eax_3

fsbase->NtTib.ExceptionList = ExceptionList
return result
