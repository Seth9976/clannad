// 函数: sub_42bdbd
// 地址: 0x42bdbd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
bool cond:0 = *(arg1 + 0x50) == 0
uint32_t __security_cookie_2 = __security_cookie_1
*(arg1 + 0x44) = 1

if (not(cond:0))
    char* esi_1 = arg2
    int32_t edi
    int32_t var_114_1 = edi
    int32_t i = 0xd
    char const* const edi_1 = "syntax error"
    bool cond:2_1 = false
    
    while (i != 0)
        char temp0_1 = *esi_1
        char const temp1_1 = *edi_1
        cond:2_1 = temp0_1 != temp1_1
        esi_1 = &esi_1[1]
        edi_1 = &edi_1[1]
        i -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (cond:2_1)
        void var_108
        void arg_c
        __vsprintf_p(&var_108, 0x100, arg2, &arg_c)
        void* var_120_2 = &var_108
        char var_9_1 = 0
        __security_cookie_1 = sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0, "%s")
    else if (*(arg1 + 0x4c) == 0 || *(arg1 + 0x278) != 9)
        __security_cookie_1 = sub_42ae08(arg1 + 0x18, 0x5dc, arg1 + 0x278)
    else
        int32_t __saved_esi_1 = *(arg1 + 0x280)
        __security_cookie_1 =
            sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0x5e0, "invalid preprocessor command '%s'")

sub_745f2b(__security_cookie_2)
return __security_cookie_1
