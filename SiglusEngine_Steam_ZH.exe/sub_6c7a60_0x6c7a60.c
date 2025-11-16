// 函数: sub_6c7a60
// 地址: 0x6c7a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != arg1[1] && arg1[3] != 0)
    if (sx.d(GetKeyState(1)) s< 0)
        POINT point
        __builtin_memset(&point, 0, 8)
        GetCursorPos(&point)
        void* edi = arg1[3]
        int32_t eax_3 = point.x
        int32_t ecx = *(edi + 0xc)
        
        if (*(edi + 0x50) == 0)
            eax_3 = point.y
        
        int32_t eax_5 = eax_3 - arg1[4] + arg1[5]
        int32_t edx = *(edi + 0x10)
        
        if (eax_5 s>= ecx)
            ecx = eax_5
            
            if (eax_5 s> edx)
                ecx = edx
        
        *(edi + 8) = ecx
        sub_6c70c0(arg1[3])
        sub_6c7670(arg1[3], *(edi + 8), *(edi + 4))
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    
    ReleaseCapture()
    arg1[3] = 0

BOOL eax
eax.b = 0
return eax
