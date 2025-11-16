// 函数: sub_4de220
// 地址: 0x4de220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
void* esi_1 = arg1
int32_t edi
int32_t var_14 = edi
void* (__stdcall** ebx_1)(void* arg1) = (**(esi_1 + 4))(esi_1, 1, 0x74)
*(esi_1 + 0x1b0) = ebx_1
*ebx_1 = sub_4dd330
ebx_1[2] = sub_4de1c0
ebx_1[0x1c] = 0

if (arg2 == 0)
    int32_t eax_9 = (*(*(esi_1 + 4) + 4))(esi_1, 1, 0x500)
    ebx_1[9] = eax_9 + 0x80
    ebx_1[0xa] = eax_9 + 0x100
    ebx_1[0xb] = eax_9 + 0x180
    ebx_1[0xc] = eax_9 + 0x200
    ebx_1[0xd] = eax_9 + 0x280
    ebx_1[0xe] = eax_9 + 0x300
    ebx_1[8] = eax_9
    ebx_1[0xf] = eax_9 + 0x380
    ebx_1[0x10] = eax_9 + 0x400
    ebx_1[0x11] = eax_9 + 0x480
    ebx_1[4] = 0
    ebx_1[1] = sub_579f50
    ebx_1[3] = sub_4dd350
    return eax_9 + 0x480

void* i = *(esi_1 + 0xdc)
arg1 = nullptr

if (*(esi_1 + 0x24) s> 0)
    int32_t* edi_1 = i + 0xc
    arg2 = &ebx_1[0x12]
    
    do
        int32_t eax_3 = *edi_1
        int32_t ecx_1 = eax_3
        
        if (*(esi_1 + 0xe0) != 0)
            ecx_1 *= 3
        
        int32_t ebx_3 = *(esi_1 + 4)
        int32_t eax_4 = sub_498550(edi_1[5], eax_3)
        *arg2 = (*(ebx_3 + 0x14))(esi_1, 1, 1, sub_498550(edi_1[4], edi_1[-1]), eax_4, ecx_1)
        i = arg1 + 1
        arg2 += 4
        edi_1 = &edi_1[0x15]
        arg1 = i
    while (i s< *(esi_1 + 0x24))

ebx_1[1] = sub_4dd5c0
ebx_1[3] = sub_4dd7e0
ebx_1[4] = &ebx_1[0x12]
return i
