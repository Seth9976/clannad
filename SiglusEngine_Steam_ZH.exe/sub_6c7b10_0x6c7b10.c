// 函数: sub_6c7b10
// 地址: 0x6c7b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (*arg1 != arg1[1])
    eax = sub_6c79a0(arg1, arg2)
    arg1[3] = eax
    
    if (eax != 0)
        if (sub_6c7340(eax, eax).b != 0)
            POINT point
            __builtin_memset(&point, 0, 8)
            GetCursorPos(&point)
            void* ecx_1 = arg1[3]
            int32_t eax_1 = point.x
            
            if (*(ecx_1 + 0x50) == 0)
                eax_1 = point.y
            
            arg1[4] = eax_1
            arg1[5] = *(ecx_1 + 8)
            SetCapture(arg2)
            HWND eax_3
            eax_3.b = 1
            return eax_3
        
        arg1[3] = 0

eax.b = 0
return eax
