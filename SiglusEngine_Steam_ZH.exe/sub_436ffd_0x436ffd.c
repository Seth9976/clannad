// 函数: sub_436ffd
// 地址: 0x436ffd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
char* esi = arg2
int32_t edi
int32_t var_110 = edi
char const* const edi_1 = "syntax error"
int32_t i = 0xd
int32_t result = 0
bool cond:1 = true

while (i != 0)
    char temp0_1 = *esi
    char const temp1_1 = *edi_1
    cond:1 = temp0_1 == temp1_1
    esi = &esi[1]
    edi_1 = &edi_1[1]
    i -= 1
    
    if (temp0_1 != temp1_1)
        break

void* esi_1
void var_108

if (cond:1)
    esi_1 = arg1
    
    if (*(esi_1 + 0x40) == 0)
        int32_t eax_3 = *(esi_1 + 0x20)
        
        if (eax_3 s> 9)
            if (eax_3 == 0xa)
                sub_74aa1b(&var_108, 0x100, "string constant")
            else if (eax_3 == 0xc)
                sub_74aa1b(&var_108, 0x100, "end of line")
            else if (eax_3 == 0xd)
                sub_74aa1b(&var_108, 0x100, "end of file")
            else
                sub_74aa1b(&var_108, 0x100, "token")
        else if (eax_3 == 9)
            int32_t var_114_4 = *(esi_1 + 0x28)
            sub_74aa1b(&var_108, 0x100, "token '%s'")
        else if (eax_3 == 0)
            sub_74aa1b(&var_108, 0x100, "version token")
        else if (eax_3 == 1)
            void* var_114_3 = esi_1 + 0x28
            sub_74aa1b(&var_108, 0x100, "token '%s'")
        else if (eax_3 s<= 1)
            sub_74aa1b(&var_108, 0x100, "token")
        else if (eax_3 s<= 4)
            sub_74aa1b(&var_108, 0x100, "integer constant")
        else if (eax_3 s> 8)
            sub_74aa1b(&var_108, 0x100, "token")
        else
            sub_74aa1b(&var_108, 0x100, "float constant")
        
        void* var_114_5 = &var_108
        result = sub_42aba3(*(esi_1 + 4) + 0x18, esi_1 + 0x20, 0xbb8, "syntax error: unexpected %s")
else
    void arg_c
    __vsprintf_p(&var_108, 0x100, arg2, &arg_c)
    esi_1 = arg1
    void* var_124_1 = &var_108
    char var_9_1 = 0
    result = sub_42aba3(*(esi_1 + 4) + 0x18, esi_1 + 0x20, 0, "%s")
*(esi_1 + 0x40) = 1
sub_745f2b(__security_cookie_1)
return result
