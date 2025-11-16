// 函数: sub_4b1570
// 地址: 0x4b1570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bffcc0
int32_t eax_1 = data_1bffcf4
int32_t eax_2 = data_1bffd28
int32_t ebx = data_1bff87c
int32_t var_c = data_1bffd5c
int32_t eax_4 = data_1bffd90
int32_t var_8 = eax_4

if (ebx s<= 0xff)
    eax_4 = 0
    
    if (ebx s< 0)
        ebx = 0
else
    ebx = 0xff

int32_t var_60 = 0xff
void* var_64 = arg5
double* var_68 = arg4
int32_t var_6c = arg2
sub_584e80(eax_4, data_702fec, data_702fe8, data_702ff0, data_976e94, data_976e98, data_976e9c, 0, 
    0, 0, 0, 0, arg3.b)
int32_t eax_5 = data_703050
int32_t edx_1 = data_7030a4
void* esi = data_7030a0
void* edi = data_703098
int32_t ecx_1 = data_70309c
void* var_38 = esi
int32_t edi_3

if (eax_5 != 0x104)
    int32_t eax_19
    
    if (eax_5 != 0x10d)
        int32_t eax_25
        int32_t edx_4
        edx_4:eax_25 = sx.q(esi - edi)
        int32_t eax_29
        int32_t edx_5
        edx_5:eax_29 = sx.q(edx_1 - ecx_1)
        esi = ((eax_25 - edx_4) s>> 1) + edi
        int32_t eax_33
        int32_t edx_6
        edx_6:eax_33 = sx.q(data_7030b4 - data_7030ac)
        edi_3 = ((eax_29 - edx_5) s>> 1) + ecx_1
        var_c = ((eax_33 - edx_6) s>> 1) + data_7030ac
        int32_t eax_39
        int32_t edx_7
        edx_7:eax_39 = sx.q(data_7030b8 - data_7030b0)
        eax_19 = ((eax_39 - edx_7) s>> 1) + data_7030b0
    else
        int32_t eax_14 = data_703058
        
        if (eax_14 == 0)
            esi = edi
            var_c = data_7030ac
            edi_3 = ecx_1
            eax_19 = data_7030b0
        else if (eax_14 == 1)
            edi_3 = ecx_1
            var_c = data_7030b4
            eax_19 = data_7030b0
        else if (eax_14 == 2)
            esi = edi
            var_c = data_7030ac
            edi_3 = edx_1
            eax_19 = data_7030b8
        else
            edi_3 = edx_1
            var_c = data_7030b4
            eax_19 = data_7030b8
    
    var_8 = eax_19
else
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(esi - edi)
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = sx.q(edx_1 - ecx_1)
    esi = ((eax_8 - edx_2) s>> 1) + edi
    edi_3 = ((eax_12 - edx_3) s>> 1) + ecx_1

int32_t ecx_2 = data_702ff0
void* edx_8 = data_702fec
int32_t eax_42 = data_702fe8
int32_t ecx_3 = data_976ebc
int32_t* ecx_4 = data_976eb8
int32_t ecx_5 = data_976eb4
int32_t ecx_6 = ecx_2
int32_t var_20 = eax_42
char var_18 = 0

if (data_108feb4 != 0 && data_137475c != 0 && data_704894 != 0)
    if (data_20f33d9 != 0)
        eax_42.b = data_20f33d8
    else
        eax_42 = sub_45dee0(ecx_6)
        ecx_6 = ecx_2
        data_20f33d8 = eax_42.b
        data_20f33d9 = 1
    
    var_18 = eax_42.b
    eax_42 = var_20

int32_t var_60_1 = 0
int32_t result = sub_58e290(eax_42, ecx_4, ecx_5, ecx_3, edi, ecx_1, var_38, edx_1, esi, edi_3, 
    ecx_6, eax_42, edx_8, ecx_6, var_c, var_8, arg3, arg2, arg4, arg5, eax, eax_1, eax_2, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, ebx, 0, var_18.d, nullptr, nullptr, nullptr, 
    0)
return result
