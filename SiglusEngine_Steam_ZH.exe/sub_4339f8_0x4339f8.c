// 函数: sub_4339f8
// 地址: 0x4339f8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* j_2 = arg1
void* arg_4
void* esi = arg_4
int32_t* ecx = *(esi + 8)
void* ebx = nullptr
int32_t edi
int32_t var_18 = edi

if (ecx != 0)
    sub_433263(ecx, 3)
    *(esi + 8) = 0

int32_t* eax_3 = sub_745f3f((arg2 << 5) + 4)

if (eax_3 != 0)
    ebx = &eax_3[1]
    *eax_3 = arg2
    sub_61cdd0(ebx, 0x20, arg2, sub_42f277)

*(esi + 8) = ebx

if (ebx == 0)
    return 0x8007000e

void* ebx_1 = *(esi + 0x1c)
arg_4 = *(*(esi + 4) + 0x40) + *(esi + 0x18) + 0x18

if (arg2 u> 0)
    int32_t* edi_2 = nullptr
    int32_t i
    
    do
        *(edi_2 + *(esi + 8)) = 3
        *(edi_2 + *(esi + 8) + 4) = *(esi + 4)
        void* ecx_5 = arg_4 - *(*(esi + 4) + 0x40)
        *(edi_2 + *(esi + 8) + 0x18) = ecx_5
        *(edi_2 + *(esi + 8) + 0x14) = sub_42f997(ecx_5, *(arg1 + 0x344), &arg_4, &j_2)
        *(edi_2 + *(esi + 8) + 0x1c) = ebx_1
        void* j_1 = j_2
        
        if (j_1 u> 0)
            void* j
            
            do
                j = j_1
                j_1 -= 1
                ebx_1 = *(ebx_1 + 0xc)
            while (j != 1)
        
        edi_2 = &edi_2[8]
        i = arg2
        arg2 -= 1
    while (i != 1)

return 0
