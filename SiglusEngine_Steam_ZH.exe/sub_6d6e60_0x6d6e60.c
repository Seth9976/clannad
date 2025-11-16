// 函数: sub_6d6e60
// 地址: 0x6d6e60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
ebx:1.b = arg2[1].b
uint32_t eax_4

if (ebx:1.b u> 0xc || ebx:1.b u< 1)
    eax_4 = sub_6d4470(arg1, "Invalid time specified for tIME chunk")
else
    ebx.b = *(arg2 + 3)
    
    if (ebx.b u> 0x1f || ebx.b u< 1 || arg2[2].b u> 0x17 || arg2[3].b u> 0x3c)
        eax_4 = sub_6d4470(arg1, "Invalid time specified for tIME chunk")
    else
        uint32_t ecx = zx.d(*arg2)
        char var_f_1 = ecx.b
        uint8_t var_10 = (ecx u>> 8).b
        uint8_t var_c_1 = arg2[2].b
        char var_b_1 = *(arg2 + 5)
        eax_4.b = arg2[3].b
        char var_e_1 = ebx:1.b
        char var_d_1 = ebx.b
        char var_a_1 = eax_4.b
        
        if (arg1 != 0)
            sub_6d4aa0(eax_4, 0x74494d45, arg1, 7)
            int32_t eax_5 = *(arg1 + 0x58)
            
            if (eax_5 == 0)
                sub_6d42e0(arg1, "Call to NULL write function")
                noreturn
            
            sub_6caa70(eax_5(arg1, &var_10, 7), &var_10, arg1, 7)
            int32_t eax_7 = sub_6d4bb0(arg1)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_7

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_4
