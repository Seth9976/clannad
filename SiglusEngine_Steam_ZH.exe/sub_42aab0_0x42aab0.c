// 函数: sub_42aab0
// 地址: 0x42aab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t var_8_1 = 0
char* i_1 = arg2
arg2 = nullptr
int32_t edi
int32_t var_14 = edi
char* i = i_1

if (i_1 u< *(arg1 + 4))
    do
        if (arg2 != 0)
        label_42aaeb:
            
            if (var_8_1 != 0)
                break
            
            if (_tolower(sx.d(*i)) != 0x6c)
                break
            
            var_8_1 = 1
        else
            if (_tolower(sx.d(*i)) != 0x75)
                goto label_42aaeb
            
            arg2 = 1
        
        i = &i[1]
    while (i u< *(arg1 + 4))

if (arg3 != 0)
    if (arg2 != 0)
        *arg3 = 4
    else if (var_8_1 != 0)
        *arg3 = 3

return i - i_1
