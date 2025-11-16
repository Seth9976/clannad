// 函数: sub_69e6a0
// 地址: 0x69e6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = arg1[2]
int32_t ebx
ebx.b = arg2[2]

if (eax u>= ebx.b)
    if (eax != ebx.b)
        return 0
    
    eax = arg1[1]
    ebx.b = arg2[1]
    
    if (eax u>= ebx.b)
        if (eax != ebx.b)
            return 0
        
        eax = *arg1
        ebx.b = *arg2
        
        if (eax u>= ebx.b && (eax != ebx.b || arg1[3] u>= arg2[3]))
            return 0

return 1
