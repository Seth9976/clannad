// 函数: sub_64fb30
// 地址: 0x64fb30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3cb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac408
int32_t i_1 = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x72c62a25, *(esi + 0xa8) - *(esi + 0xa4))
int32_t edx_3 = edx_2 s>> 0xa
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    result = *(esi + 0xa4)
    int32_t ebx_1 = 0
    int32_t edx_9
    int32_t i
    
    do
        int32_t j = 0
        int32_t* eax_7 = result + 0x438 + ebx_1
        int32_t* var_178_1 = eax_7
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = muls.dp.d(0x4fba3d0b, eax_7[1] - *eax_7)
        int32_t edx_5 = edx_4 s>> 0xb
        
        if ((edx_5 u>> 0x1f) + edx_5 s> 0)
            int32_t esi_1 = 0
            int32_t edx_7
            
            do
                void* ecx_4 = *var_178_1 + esi_1
                sub_5d9690(ecx_4)
                sub_5d8380(ecx_4)
                j += 1
                esi_1 += 0x19b0
                int32_t* eax_15 = *(data_bac408 + 0xa4) + 0x438 + ebx_1
                var_178_1 = eax_15
                int32_t eax_16
                int32_t edx_6
                edx_6:eax_16 = muls.dp.d(0x4fba3d0b, eax_15[1] - *eax_15)
                edx_7 = edx_6 s>> 0xb
            while (j s< (edx_7 u>> 0x1f) + edx_7)
            esi = data_bac408
        
        ebx_1 += 0x8ec
        int32_t eax_20
        int32_t edx_8
        edx_8:eax_20 = muls.dp.d(0x72c62a25, *(esi + 0xa8) - *(esi + 0xa4))
        i = i_1 + 1
        edx_9 = edx_8 s>> 0xa
        i_1 = i
        result = *(esi + 0xa4)
    while (i s< (edx_9 u>> 0x1f) + edx_9)

if (arg1 != 0)
    int32_t var_16c
    sub_54aed0(&var_16c)
    int32_t var_8_1 = 0
    var_16c = 0x18
    void* var_2d4
    int32_t var_2e8_2 = sub_54cf80(&var_2d4, &var_16c)
    var_8_1.b = 1
    sub_6767a0(data_bac458 + 0x158)
    int32_t ecx_15 = sub_62f9b0(data_bac458, &var_2d4)
    
    if (*(var_2d4 + 0xad9a68) != 0)
        int32_t var_2e8_4 = ecx_15
        sub_696dc0()
    
    void var_248
    sub_54ae40(&var_248)
    void var_e0
    result = sub_54ae40(&var_e0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
