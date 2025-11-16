// 函数: sub_677fa0
// 地址: 0x677fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6f00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac45c
*(eax_3 + 0x60) += 4
int32_t result = *(*(eax_3 + 0x60) - 4)
int32_t i = result - 1
int32_t i_1 = i

if (i s>= 0)
    int32_t* edi_1 = data_bac49c
    int32_t* esi_1 = i * 0x164
    
    do
        *(esi_1 + *(arg1 + 0xa4)) = 0xffffffff
        void* eax_6 = data_bac45c
        *(eax_6 + 0x60) += 4
        *(*arg2 + (i << 2)) = *(*(eax_6 + 0x60) - 4)
        int32_t ecx_1 = *(*arg2 + (i << 2))
        
        if (ecx_1 == 0xa)
            *(esi_1 + *(arg1 + 0xa4) + 4) = ecx_1
            edi_1[1] -= 1
            *(esi_1 + *(arg1 + 0xa4) + 8) = *(*edi_1 + (edi_1[1] << 2))
        else if (ecx_1 == 0x14)
            *(esi_1 + *(arg1 + 0xa4) + 4) = ecx_1
            int16_t var_2c
            void** edx_1 = sub_677c10(&var_2c)
            int32_t var_8_1 = 0
            void* ecx_6 = *(arg1 + 0xa4) + 0xc + esi_1
            
            if (ecx_6 != edx_1)
                sub_52e3c0(ecx_6, edx_1, 0, 0xffffffff)
            
            int32_t var_8_2 = 0xffffffff
            int32_t var_18
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            edi_1 = data_bac49c
            var_18 = 7
            int32_t var_1c_1 = 0
            var_2c = 0
        else if (ecx_1 == 0x1e)
            *(esi_1 + *(arg1 + 0xa4) + 4) = 0xa
            edi_1[1] -= 1
            *(esi_1 + *(arg1 + 0xa4) + 8) = *(*edi_1 + (edi_1[1] << 2))
        else if (ecx_1 != 0xffffffff)
            *(esi_1 + *(arg1 + 0xa4) + 4) = ecx_1
            sub_677d60(*(arg1 + 0xa4) + 0x24 + esi_1)
        else
            int32_t var_58_2 = ecx_1
            int32_t var_44
            sub_6781c0(&var_44)
            int32_t var_8_3 = 1
            *(esi_1 + *(arg1 + 0xa4) + 4) = 0xffffffff
            *(*(arg1 + 0xa4) + esi_1 + 0x15c) = sub_677fa0(eax_2)
            int32_t var_8_4 = 0xffffffff
            int32_t eax_22 = var_44
            
            if (eax_22 != 0)
                j__free(eax_22)
                var_44 = 0
                int32_t var_40_1 = 0
                int32_t var_3c_1 = 0
            
            edi_1 = data_bac49c
        
        esi_1 -= 0x164
        i = i_1 - 1
        i_1 = i
    while (i s>= 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
