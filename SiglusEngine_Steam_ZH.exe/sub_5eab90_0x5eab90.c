// 函数: sub_5eab90
// 地址: 0x5eab90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcb88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (*(data_bac454 + 0x1c08) != 0)
    int32_t* eax_4
    int32_t* ecx_2
    eax_4, ecx_2 = sub_745f3f(0xc)
    
    if (eax_4 == 0)
        eax_4 = nullptr
    else
        *eax_4 = 0
        eax_4[1] = 0
        eax_4[2] = 0
    
    int32_t* var_34 = eax_4
    int32_t* var_30 = nullptr
    int32_t var_8_2 = 1
    int32_t* var_50_2 = &var_30
    sub_5f2040(eax_4, eax_4, ecx_2)
    int32_t var_8_3 = 2
    sub_54d190(arg1 + 0x1568, &var_34)
    int32_t var_8_4 = 0xffffffff
    int32_t* esi_1 = var_30
    
    if (esi_1 != 0)
        bool cond:0_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:0_1))
            (*(*esi_1 + 4))(eax_2)
            int32_t edi_1 = esi_1[2]
            esi_1[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi_1 + 8))()
    
    void* edx_2 = data_bac454
    int32_t* eax_9 = *(edx_2 + 0x1c08)
    void* eax_10 = *(edx_2 + 0x1c0c)
    void* var_50_4 = eax_10
    
    if (eax_10 != 0)
        *(eax_10 + 4)
        *(eax_10 + 4) += 1
    
    *(arg1 + 0x1568)
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Move_assign(
        eax_9)
    result.b = 1
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf3118, 0xd)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 3, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
