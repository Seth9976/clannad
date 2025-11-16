// 函数: sub_6cb630
// 地址: 0x6cb630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_d = arg2.b
uint8_t var_f = (arg2 u>> 0x10).b
uint8_t var_e = (arg2 u>> 8).b
char var_c = 0

if (arg1 != 0)
    int32_t eax_8 = *(arg1 + 0x238)
    
    if (eax_8 != 0)
        int32_t edx = *(arg1 + 0x23c)
        int32_t* ecx_1 = eax_8 * 5 + edx
        
        do
            ecx_1 -= 5
            
            if ((arg2 u>> 0x18).b.d == *ecx_1)
                uint32_t result = zx.d(ecx_1[1].b)
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return result
        while (ecx_1 u> edx)

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0
