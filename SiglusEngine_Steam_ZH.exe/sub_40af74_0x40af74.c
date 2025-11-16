// 函数: sub_40af74
// 地址: 0x40af74
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg4 + (modu.dp.d(0:arg1, arg5) << 2)
int32_t* i = *ecx
int32_t* i_1 = nullptr

if (i != 0)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        if (i[3] == arg3 && i[1] == arg2 && *i == arg1)
            i = i[4]
            
            if (i_1 == 0)
                *ecx = i
            else
                i_1[4] = i
            
            break
        
        i_1 = i
        i = i[4]
    while (i != 0)

return i
