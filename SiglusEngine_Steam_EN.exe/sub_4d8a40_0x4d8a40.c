// 函数: sub_4d8a40
// 地址: 0x4d8a40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_1332b50
char eax = 0
int32_t ecx = data_1332b64
int32_t ebx = data_1332b58
int32_t esi = data_1332b5c
int32_t edi = data_1332b60
int32_t var_c = edx
data_1c0529c = 0

if (edi == esi)
    eax = 0
    
    if (ecx == ebx)
        eax = 1
    
    data_1c0529c = eax

int32_t var_8_1

if (data_1311175 == 0)
    edx = 2
    var_c = 2
label_4d8ae3:
    
    if (eax != 0)
        goto label_4d8aeb
    
    if (edx u<= 4)
        goto label_4d8b2e
    
    esi = var_c
    ecx = var_c
label_4d8bb4:
    var_8_1 = ecx
label_4d8bb7:
    
    if (edi != esi || data_1332b64 != ecx)
        goto label_4d8bd1
    
    goto label_4d8bc3

int32_t edx_4
int32_t ebx_2
int32_t edi_2

if (edx != 0)
    if (edx != 4)
        goto label_4d8ae3
    
    if (data_1332b48 == 0x64 && data_1332b4c == 0x64 && data_1332b40 == 0 && data_1332b44 == 0)
        data_1c0529c = 1
        goto label_4d8aeb
    
    data_1c0529c = 0
label_4d8b2e:
    
    switch (jump_table_4d8d58[edx])
        case 0x4d8b35
            esi = edi
            var_8_1 = ecx
        label_4d8bc3:
            data_1c0529c = 1
        label_4d8bd1:
            int32_t eax_26
            int32_t edx_15
            edx_15:eax_26 = sx.q(data_1332b5c - esi)
            int32_t edi_4 = (eax_26 - edx_15) s>> 1
            int32_t eax_30
            int32_t edx_16
            edx_16:eax_30 = sx.q(ebx - ecx)
            data_1356ec4 = edi_4
            ebx_2 = (eax_30 - edx_16) s>> 1
            data_1356ec8 = ebx_2
            edx_4 = edi_4 - 1 + esi
            edi_2 = ecx - 1 + ebx_2
            data_1356ecc = edx_4
            data_1356ed0 = edi_2
            
            if (var_c == 4)
                int32_t eax_32
                int32_t edx_18
                edx_18:eax_32 = muls.dp.d(0x51eb851f, data_1332b44 * esi)
                int32_t ecx_10 = data_1332b40 * var_8_1
                int32_t edx_19 = edx_18 s>> 5
                int32_t esi_5 = (edx_19 u>> 0x1f) + edx_19
                data_1356ec4 += esi_5
                int32_t eax_36 = ecx_10 s/ 0x64
                ebx_2 += eax_36
                edx_4 = data_1356ecc + esi_5
                edi_2 += eax_36
                data_1356ec8 = ebx_2
                data_1356ecc = edx_4
                data_1356ed0 = edi_2
            
            esi = data_1332b5c
        case 0x4d8b3f
            ecx = divs.dp.d(sx.q(ecx * data_1332b5c), edi)
            var_8_1 = ecx
            
            if (ecx s<= ebx)
                goto label_4d8bb7
            
            data_1332b64
            esi = divs.dp.d(sx.q(ebx * edi), data_1332b64)
            ecx = ebx
            goto label_4d8bb4
        case 0x4d8b62
            ecx = ebx
            goto label_4d8bb4
        case 0x4d8b66
            int32_t temp0_3 = divs.dp.d(sx.q(ebx * edi), ecx)
            ecx = ebx
            esi = temp0_3
            goto label_4d8bb4
        case 0x4d8b74
            int32_t eax_22
            int32_t edx_11
            edx_11:eax_22 = muls.dp.d(0x51eb851f, data_1332b4c * edi)
            int32_t edx_12 = edx_11 s>> 5
            esi = (edx_12 u>> 0x1f) + edx_12
            int32_t eax_23
            int32_t edx_13
            edx_13:eax_23 = muls.dp.d(0x51eb851f, data_1332b48 * data_1332b64)
            int32_t edx_14 = edx_13 s>> 5
            ecx = (edx_14 u>> 0x1f) + edx_14
            goto label_4d8bb4
else
    data_1c0529c = 1
label_4d8aeb:
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(esi - edi)
    data_1356ec4 = (eax_3 - edx_1) s>> 1
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(ebx - ecx)
    edx_4 = edi - 1 + data_1356ec4
    data_1356ecc = edx_4
    ebx_2 = (eax_8 - edx_2) s>> 1
    edi_2 = ecx - 1 + ebx_2
    data_1356ec8 = ebx_2
    data_1356ed0 = edi_2

int32_t eax_38 = 0
data_1c052a0 = 0

if (data_1311175 != 0 && data_1c051e0 != 0)
    int32_t ecx_11 = data_1c05298
    
    if (ebx_2 s< ecx_11)
        eax_38 = ecx_11 - ebx_2
        data_1c052a0 = eax_38
    
    int32_t eax_39 = eax_38 - ecx_11
    ebx_2 += eax_39
    edi_2 += eax_39
    data_1356ec8 = ebx_2
    data_1356ed0 = edi_2

int32_t edx_24 = edx_4 - data_1356ec4 + 1
data_1c0529d = 0
data_1356ed4 = edx_24
data_1356ec0 = edi_2 - ebx_2 + 1

if (edx_24 != esi || edi_2 - ebx_2 + 1 != data_1332b58)
    data_1c0529d = 1

int32_t edx_25 = data_1332b50
int32_t result = data_1332b48

if (data_1c05294 != edx_25 || data_1c05290 != result || data_1c0528c != data_1332b4c
        || data_1c05288 != data_1332b40 || data_1c05284 != data_1332b44)
    data_1c05290 = result
    data_1c0528c = data_1332b4c
    data_1c05288 = data_1332b40
    result = data_1332b44
    data_1c05294 = edx_25
    data_1c05284 = result
    data_1321ec8 = 1

return result
