// 函数: sub_42c2dc
// 地址: 0x42c2dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_1 = *(*(arg1 + 0x268) + 0x38)
int32_t edx = 0
int32_t var_c
char const* const var_8

if (eax_1 != 0)
    if (eax_1[2] == 0)
        if (*eax_1 == 0 && eax_1[1] != 0)
            edx = 1
        
        *(arg1 + 0x54) = edx
        *eax_1 = 1
        eax_1[2] = 1
        return 0
    
    var_8 = "unexpected #else following #else"
    var_c = 0x5ea
else
    var_8 = "unexpected #else"
    var_c = 0x5e5

sub_42aba3(arg1 + 0x18, arg1 + 0x278, var_c, var_8)
*(arg1 + 0x44) = 1
return 0x80004005
