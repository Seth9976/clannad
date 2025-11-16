// 函数: sub_42c25f
// 地址: 0x42c25f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_1 = *(*(arg1 + 0x268) + 0x38)
int32_t var_10_1
char const* const var_c_1

if (eax_1 != 0)
    if (eax_1[2] == 0)
        int32_t ecx
        
        if (arg2 == 0 || *eax_1 != 0 || eax_1[1] == 0)
            ecx = 0
        else
            ecx = 1
        
        *(arg1 + 0x54) = ecx
        
        if (arg2 != 0)
            *eax_1 = 1
        
        return 0
    
    var_c_1 = "unexpected #elif following #else"
    var_10_1 = 0x5e9
else
    var_c_1 = "unexpected #elif"
    var_10_1 = 0x5e4

sub_42aba3(arg1 + 0x18, arg1 + 0x278, var_10_1, var_c_1)
*(arg1 + 0x44) = 1
return 0x80004005
