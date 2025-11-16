// 函数: sub_560065
// 地址: 0x560065
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t es
uint32_t var_3 = zx.d(es)
char* eax
eax.b = sbb.b((arg1 + arg6).b, 0, arg1 + arg6 u< arg1)
*eax += eax.b
arg3.b += arg3:1.b
*eax = 0
int32_t* entry_ebx
entry_ebx[0x171d40fe].b += eax.b
label_560080:
void** eax_2 = *(arg3 + 0x148) + 0xc
int32_t* ecx_1 = *entry_ebx + arg5

if (ecx_1 != eax_2)
    sub_52e3c0(ecx_1, eax_2, 0, 0xffffffff)
    arg2 = arg4[-0xd]

*(arg5 + *entry_ebx + 0x20) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x16c)
*(arg5 + *entry_ebx + 0x18) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x2d0)
int32_t eax_11 = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x2d0)

while (true)
    *(arg5 + *entry_ebx + 0x1c) = eax_11
    
    while (true)
        arg6 += 0x164
        arg5 += 0x24
        int32_t temp1_1 = arg4[-0xe]
        arg4[-0xe] -= 1
        
        if (temp1_1 == 1)
            void* edi = arg4[-0x14]
            int32_t eax_23 = *arg4[-0x13]
            int32_t result
            
            if (eax_23 == 0)
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
                if (eax_23 == 1)
                    *(edi + 0xa0) = 1
                    goto label_5602af
                
                if (eax_23 == 2)
                    *(edi + 0xa0) = 2
                    goto label_5602af
            
            result.b = 1
            TEB* fsbase
            fsbase->NtTib.ExceptionList = arg4[-3]
            sub_745f2b(arg4[-5] ^ arg4)
            *arg4
            return result
        
        arg3 = *(arg2 + 4) + arg6
        int32_t eax_28 = *(arg3 + 0x15c)
        
        if (eax_28 == 1)
            void** eax_30 = *(arg3 + 0x148) + 0xc
            int32_t* ecx_14 = *entry_ebx + arg5
            
            if (ecx_14 != eax_30)
                sub_52e3c0(ecx_14, eax_30, 0, 0xffffffff)
                arg2 = arg4[-0xd]
            
            *(arg5 + *entry_ebx + 0x20) = 1
            *(arg5 + *entry_ebx + 0x18) = 0
            *(arg5 + *entry_ebx + 0x1c) = 0
        else if (eax_28 != 2)
            if (eax_28 == 3)
                goto label_560080
            
            if (eax_28 == 4)
                void** eax_13 = *(arg3 + 0x148) + 0xc
                int32_t* ecx_5 = *entry_ebx + arg5
                
                if (ecx_5 != eax_13)
                    sub_52e3c0(ecx_5, eax_13, 0, 0xffffffff)
                    arg2 = arg4[-0xd]
                
                *(arg5 + *entry_ebx + 0x20) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x16c)
                *(arg5 + *entry_ebx + 0x18) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x2d0)
                eax_11 = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x434)
                break
        else
            void** eax_35 = *(arg3 + 0x148) + 0xc
            int32_t* ecx_16 = *entry_ebx + arg5
            
            if (ecx_16 != eax_35)
                sub_52e3c0(ecx_16, eax_35, 0, 0xffffffff)
                arg2 = arg4[-0xd]
            
            *(arg5 + *entry_ebx + 0x20) = *(*(arg6 + *(arg2 + 4) + 0x148) + 0x16c)
            *(arg5 + *entry_ebx + 0x18) = 0
            *(arg5 + *entry_ebx + 0x1c) = 0
