// 函数: _ValidateScopeTableHandlers
// 地址: 0x766570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg3
void* eax = nullptr
int32_t ebx
int32_t var_8 = ebx
void* edx = 0xffffffff

if (ecx != 0xffffffff)
    while (true)
        int32_t ecx_1 = ecx * 3
        int32_t* ebx_3 = arg2 + (ecx_1 << 2)
        void* esi_3 = (*(arg2 + (ecx_1 << 2) + 8) - arg1) & 0xfffff000
        
        if (esi_3 == edx)
            goto label_7665d6
        
        int32_t edx_1
        
        if (eax != 0)
            edx_1 = *(eax + 0xc)
        
        if (eax == 0 || esi_3 u< edx_1 || esi_3 u>= *(eax + 8) + edx_1)
            eax = __FindPESection(arg1, esi_3)
            
            if (eax != 0 && (*(eax + 0x24) & 0x20000000) != 0)
                goto label_7665d4
        else
        label_7665d4:
            edx = esi_3
        label_7665d6:
            int32_t esi_4 = ebx_3[1]
            
            if (esi_4 == 0)
                goto label_766612
            
            void* esi_6 = (esi_4 - arg1) & 0xfffff000
            
            if (esi_6 == edx)
                goto label_766612
            
            int32_t edx_2 = *(eax + 0xc)
            
            if (esi_6 u< edx_2 || esi_6 u>= *(eax + 8) + edx_2)
                eax = __FindPESection(arg1, esi_6)
                
                if (eax != 0 && (*(eax + 0x24) & 0x20000000) != 0)
                    goto label_766610
            else
            label_766610:
                edx = esi_6
            label_766612:
                ecx = *ebx_3
                
                if (ecx == 0xffffffff)
                    break
                
                continue
        
        return 0

return 1
