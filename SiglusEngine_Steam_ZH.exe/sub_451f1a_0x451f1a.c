// 函数: sub_451f1a
// 地址: 0x451f1a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t var_8_1 = 0
int32_t ebx
int32_t var_10 = ebx
int32_t* ebx_1 = arg2
int32_t eax = ebx_1[0x12]
int32_t edx = ebx_1[0x16]
int32_t esi
int32_t var_14 = esi
int32_t ecx = ebx_1[1]
int32_t edi
int32_t var_18 = edi
int32_t* esp = &var_18
int32_t* arg_4
int32_t* edi_1 = arg_4
int16_t* eax_1 = eax + *edi_1
*ebx_1 = ecx
uint32_t ecx_2 = edx u>> 0x18
int32_t result

if (ecx_2 == 0xc)
    var_8_1 = 1
label_451f79:
    int32_t edi_2 = *(arg1 + 0xb0)
    arg_4 = *(ebx_1[0xd] + 0x10)
    int32_t ecx_12 = *(*(edi_2 + (ebx_1[7] << 2)) + 0x4c)
    uint32_t* var_28
    
    if (edx == 0xc000000)
    label_45205b:
        uint32_t ecx_27
        
        if ((ebx_1[0xc].b & 0x10) == 0)
            int32_t var_1c_6 = ecx_12
            int32_t var_20_6 = &arg_4
            uint32_t* var_24_6 = arg_4
            int16_t* ecx_25 = zx.d(*(ebx_1 + 0x56))
            var_28 = ebx_1[0xf]
            sub_44a01e(&ebx_1[2], eax_1, ecx_25, var_28, var_24_6, var_20_6)
            ecx_27 = arg_4
        else
            int32_t ecx_21 = ebx_1[0x18]
            int32_t esi_5
            int32_t edi_4
            edi_4, esi_5 = __builtin_memcpy(eax_1, ebx_1[0x17], ecx_21 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_5, ecx_21 & 3)
            ecx_27 = zx.d(*(ebx_1 + 0x56))
        
        int32_t* esi_6 = *(arg1 + 8)
        
        if (var_8_1 == 0)
            uint32_t edx_3 = zx.d(*(ebx_1 + 0x56))
            int32_t ecx_28 = *esi_6
            uint32_t eax_9 = zx.d(ebx_1[0x15].w)
            var_28 = esi_6
            result = (*(ecx_28 + 0x1b4))(var_28, eax_9, eax_1, edx_3)
            esp = &var_18
        else
            int32_t edx_2 = *esi_6
            uint32_t eax_8 = zx.d(ebx_1[0x15].w)
            var_28 = esi_6
            result = (*(edx_2 + 0x178))(var_28, eax_8, eax_1, ecx_27)
            esp = &var_18
    else if (edx == 0xc010000)
    label_452012:
        int32_t var_1c_4 = ecx_12
        int32_t* var_20_4 = &arg_4
        int32_t* var_24_4 = arg_4
        uint32_t ecx_17 = zx.d(*(ebx_1 + 0x56))
        var_28 = ebx_1[0xf]
        sub_44a7df(&ebx_1[2], eax_1, ecx_17, var_28, var_24_4, var_20_4)
        int32_t* esi_3 = *(arg1 + 8)
        int32_t eax_6 = *esi_3
        uint32_t var_1c_5 = zx.d(*(ebx_1 + 0x56))
        int16_t* var_20_5 = eax_1
        uint32_t var_24_5 = zx.d(ebx_1[0x15].w)
        var_28 = esi_3
        esp = &var_28
        
        if (var_8_1 == 0)
            result = (*(eax_6 + 0x1c4))()
        else
            result = (*(eax_6 + 0x188))()
    else if (edx == 0xc020000)
    label_451fc7:
        int32_t var_1c_2 = ecx_12
        int32_t** var_20_2 = &arg_4
        int32_t* var_24_2 = arg_4
        uint32_t ecx_13 = zx.d(*(ebx_1 + 0x56))
        var_28 = ebx_1[0xf]
        sub_44a3d9(&ebx_1[2], eax_1, ecx_13, var_28, var_24_2)
        int32_t* esi_2 = *(arg1 + 8)
        int32_t eax_4 = *esi_2
        uint32_t var_1c_3 = zx.d(*(ebx_1 + 0x56))
        int16_t* var_20_3 = eax_1
        uint32_t var_24_3 = zx.d(ebx_1[0x15].w)
        var_28 = esi_2
        esp = &var_28
        
        if (var_8_1 == 0)
            result = (*(eax_4 + 0x1bc))()
        else
            result = (*(eax_4 + 0x180))()
    else
        if (edx == 0xd000000)
            goto label_45205b
        
        if (edx == 0xd010000)
            goto label_452012
        
        if (edx == 0xd020000)
            goto label_451fc7
        
        result = 0x80004005
else
    if (ecx_2 == 0xd)
        goto label_451f79
    
    if (ecx_2 != 0xf)
        result = 0x80004005
    else
        result = sub_450962(arg1, edi_1, ebx_1, &ebx_1[0x19])
        esp = &var_18

*esp
esp[1]
esp[2]
return result
