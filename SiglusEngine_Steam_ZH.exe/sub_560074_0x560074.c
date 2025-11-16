// 函数: sub_560074
// 地址: 0x560074
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg5 + arg4[0x17]
label_560080:
void** eax_1 = *(arg3 + 0x148) + 0xc
int32_t* entry_ebx
int32_t* ecx_1 = *entry_ebx + esi

if (ecx_1 != eax_1)
    sub_52e3c0(ecx_1, eax_1, 0, 0xffffffff)
    arg2 = arg4[-0xd]

*(esi + *entry_ebx + 0x20) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x16c)
*(esi + *entry_ebx + 0x18) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x2d0)
int32_t eax_10 = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x2d0)

while (true)
    *(esi + *entry_ebx + 0x1c) = eax_10
    
    while (true)
        arg6 += 0x164
        esi += 0x24
        int32_t temp0_1 = arg4[-0xe]
        arg4[-0xe] -= 1
        
        if (temp0_1 == 1)
            void* edi = arg4[-0x14]
            int32_t eax_22 = *arg4[-0x13]
            int32_t result
            
            if (eax_22 == 0)
                *(edi + 0xa0) = 0
            label_5602af:
                *(edi + 0xa4) = arg4[-0x10]
                *(edi + 0xa8) = arg4[-0x12]
                *(edi + 0xac) = arg4[-0x11]
                result.b = *(arg4 - 0x2f)
                *(edi + 0xb0) = result.b
                result.b = *(arg4 - 0x2e)
                *(edi + 0xb1) = result.b
                result.b = arg4[-0xc].b
                *(edi + 0xb2) = result.b
                result.b = *(arg4 - 0x2d)
                *(edi + 0xb3) = 1
                *(edi + 0xb4) = result.b
                *(edi + 0xc4) = 0
                *(edi + 0xc8) = 0xffffffff
                *(edi + 0xcc) = 0
                *(edi + 0xd0) = 0xffffffff
            else
                if (eax_22 == 1)
                    *(edi + 0xa0) = 1
                    goto label_5602af
                
                if (eax_22 == 2)
                    *(edi + 0xa0) = 2
                    goto label_5602af
            
            result.b = 1
            TEB* fsbase
            fsbase->NtTib.ExceptionList = arg4[-3]
            sub_745f2b(arg4[-5] ^ arg4)
            *arg4
            return result
        
        arg3 = *(arg2 + 4) + arg6
        int32_t eax_27 = *(arg3 + 0x15c)
        
        if (eax_27 == 1)
            void** eax_29 = *(arg3 + 0x148) + 0xc
            int32_t* ecx_14 = *entry_ebx + esi
            
            if (ecx_14 != eax_29)
                sub_52e3c0(ecx_14, eax_29, 0, 0xffffffff)
                arg2 = arg4[-0xd]
            
            *(esi + *entry_ebx + 0x20) = 1
            *(esi + *entry_ebx + 0x18) = 0
            *(esi + *entry_ebx + 0x1c) = 0
        else if (eax_27 != 2)
            if (eax_27 == 3)
                goto label_560080
            
            if (eax_27 == 4)
                void** eax_12 = *(arg3 + 0x148) + 0xc
                int32_t* ecx_5 = *entry_ebx + esi
                
                if (ecx_5 != eax_12)
                    sub_52e3c0(ecx_5, eax_12, 0, 0xffffffff)
                    arg2 = arg4[-0xd]
                
                *(esi + *entry_ebx + 0x20) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x16c)
                *(esi + *entry_ebx + 0x18) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x2d0)
                eax_10 = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x434)
                break
        else
            void** eax_34 = *(arg3 + 0x148) + 0xc
            int32_t* ecx_16 = *entry_ebx + esi
            
            if (ecx_16 != eax_34)
                sub_52e3c0(ecx_16, eax_34, 0, 0xffffffff)
                arg2 = arg4[-0xd]
            
            *(esi + *entry_ebx + 0x20) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x16c)
            *(esi + *entry_ebx + 0x18) = 0
            *(esi + *entry_ebx + 0x1c) = 0
