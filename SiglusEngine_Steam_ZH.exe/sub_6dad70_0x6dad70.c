// 函数: sub_6dad70
// 地址: 0x6dad70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_e0[0xd8]
    sub_6d4690(eax_3, &var_e0, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_e0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

if (arg2 != 0 && (arg2[2] & 0x4000) != 0)
    sub_6d8610(arg3, arg4)
    int32_t* eax_5 = sub_6d4840(arg3, "duplicate")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_5

if (arg4 u< 4)
    sub_6d8610(arg3, arg4)
    int32_t* eax_6 = sub_6d4840(arg3, "invalid")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_6

int32_t eax_7 = sub_6d87a0(arg2, &arg4[1], arg3, 2)
char* ebx = eax_7

if (ebx == 0)
    sub_6d4840(arg3, "out of memory")
    int32_t eax_8 = sub_6d8610(arg3, arg4)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_8

sub_6d85d0(eax_7, ebx, arg3, arg4)
*(arg4 + ebx) = 0
int32_t* eax_9 = sub_6d8610(arg3, 0)

if (eax_9 == 0)
    eax_9.b = *ebx
    char var_e1_1 = eax_9.b
    int32_t ecx_23
    char const* const edx_8
    
    if (eax_9.b == 1 || eax_9.b == 2)
        void* var_ec = 1
        int32_t var_e8 = 0
        
        if (sub_6cd270(&var_e8, arg4, ebx, &var_e8, &var_ec) == 0)
            edx_8 = "bad width format"
            ecx_23 = arg3
        else
            char* ecx_20 = var_ec
            
            if (ecx_20 u>= arg4)
                edx_8 = "bad width format"
                ecx_23 = arg3
            else
                int32_t eax_11
                eax_11.b = *(ecx_20 + ebx)
                var_ec = &ecx_20[1]
                
                if (eax_11.b != 0)
                    edx_8 = "bad width format"
                    ecx_23 = arg3
                else if ((var_e8 & 0x188) == 0x108)
                    var_e8 = 0
                    
                    if (sub_6cd270(&var_e8, arg4, ebx, &var_e8, &var_ec) == 0 || var_ec != arg4)
                        edx_8 = "bad height format"
                        ecx_23 = arg3
                    else
                        ecx_23 = arg3
                        
                        if ((var_e8 & 0x188) == 0x108)
                            uint32_t eax_21 = zx.d(var_e1_1)
                            int32_t* eax_22 =
                                sub_6ce420(eax_21, arg2, ecx_23, eax_21, &ebx[1], &ecx_20[1] + ebx)
                            sub_745f2b(eax_1 ^ &__saved_ebp)
                            return eax_22
                        
                        edx_8 = "non-positive height"
                else
                    edx_8 = "non-positive width"
                    ecx_23 = arg3
    else
        edx_8 = "invalid unit"
        ecx_23 = arg3
    
    eax_9 = sub_6d4840(ecx_23, edx_8)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_9
