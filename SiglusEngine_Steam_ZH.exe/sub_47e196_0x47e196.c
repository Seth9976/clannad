// 函数: sub_47e196
// 地址: 0x47e196
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x1004)
uint32_t __security_cookie_1 = __security_cookie
int32_t ebx
int32_t var_8 = ebx
char* esi = arg2
int32_t edi
int32_t var_10 = edi
char const* const edi_1 = "syntax error"
int32_t i = 0xd
bool cond:1 = false
arg1[0x13] = 1

while (i != 0)
    char temp0_1 = *esi
    char const temp1_1 = *edi_1
    cond:1 = temp0_1 != temp1_1
    esi = &esi[1]
    edi_1 = &edi_1[1]
    i -= 1
    
    if (temp0_1 != temp1_1)
        break

int32_t result

if (cond:1)
    void var_1008
    void arg_c
    __vsprintf_p(&var_1008, 0x1000, arg2, &arg_c)
    void* var_24_3 = &var_1008
    char var_f09_1 = 0
    result = sub_42aba3(*arg1, &arg1[4], 0, "%s")
else
    result = sub_42ae08(*arg1, 0x7d0, &arg1[4])
    
    if (arg1[4] == 9)
        if (arg1[0x15] == 0x7e7)
            int32_t var_14_1 = arg1[6]
            sub_42aba3(*arg1, &arg1[4], 0x7e7, 
                "'%s' is not a valid instruction in this shader version")
        
        result = 0x7e8
        
        if (arg1[0x15] == 0x7e8)
            int32_t var_14_2 = arg1[6]
            result = sub_42aba3(*arg1, &arg1[4], 0x7e8, "invalid instruction modifiers '%s'")

sub_745f2b(__security_cookie_1)
return result
