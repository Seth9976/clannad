// 函数: sub_6d5630
// 地址: 0x6d5630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3
arg3:1.b = *(esi + 0x14f)
int32_t eax

if (arg3:1.b != 3)
    eax = 0x100
else
    arg3.b = *(esi + 0x150)
    eax = 1 << arg3.b

int32_t ecx
char const* const edx

if (((*(esi + 0x248) & 1) != 0 || arg4 != 0) && arg4 u<= eax)
    ecx = esi
    
    if ((arg3:1.b & 2) != 0)
        int32_t eax_2 = arg4 * 3
        *(esi + 0x140) = arg4.w
        sub_6d4aa0(eax_2, 0x504c5445, ecx, eax_2)
        int32_t var_c = 0
        
        if (arg4 != 0)
            void* edi_1 = arg2 + 2
            int32_t ecx_3
            
            do
                char var_8 = *(edi_1 - 2)
                char var_7_1 = *(edi_1 - 1)
                char var_6_1 = *edi_1
                int32_t eax_6 = *(esi + 0x58)
                
                if (eax_6 == 0)
                    sub_6d42e0(esi, "Call to NULL write function")
                    noreturn
                
                sub_6caa70(eax_6(esi, &var_8, 3), &var_8, esi, 3)
                ecx_3 = var_c + 1
                edi_1 += 3
                var_c = ecx_3
            while (ecx_3 u< arg4)
        
        int32_t result = sub_6d4bb0(esi)
        *(esi + 0x74) |= 2
        return result
    
    edx = "Ignoring request to write a PLTE chunk in grayscale PNG"
else
    edx = "Invalid number of colors in palette"
    ecx = esi
    
    if (arg3:1.b == 3)
        sub_6d42e0(ecx, "Invalid number of colors in palette")
        noreturn

return sub_6d4470(ecx, edx)
