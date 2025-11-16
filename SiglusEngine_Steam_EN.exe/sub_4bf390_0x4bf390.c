// 函数: sub_4bf390
// 地址: 0x4bf390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
uint32_t ecx = data_1bfe268
*arg1 = 0xffffffff

if (ecx == 0xffffffff)
    sub_4bee00()
    uint32_t ecx_3 = data_1bfe268
    
    if (ecx_3 != 0xffffffff)
        int32_t eax_4 = sub_4bf2d0(ecx_3)
        
        if (eax_4 s<= 0)
            sub_4bef40()
            return 0
        
        *arg1 = data_1bfffcc
        sub_4bef40()
        return eax_4
else
    int32_t eax_1 = sub_4bf2d0(ecx)
    
    if (eax_1 s> 0)
        *arg1 = data_1bfffcc
        return eax_1

return 0
