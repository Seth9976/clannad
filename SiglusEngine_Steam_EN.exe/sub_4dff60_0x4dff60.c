// 函数: sub_4dff60
// 地址: 0x4dff60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0

if (arg2 == 0)
    return 0x80004003

*arg2 = 0
int32_t* var_8
int32_t eax_1 = sub_4e0510(&var_8)

if (eax_1 s< 0)
    return eax_1

int32_t* ebx_1 = arg1
int32_t* var_c_1
int32_t* esi_1
int32_t* edi_1

if ((ebx_1[5].b & 2) == 0)
    esi_1 = ebx_1[1]
    arg1 = 2
    var_c_1 = esi_1
    
    if (esi_1 != 0)
        (*(*esi_1 + 4))(esi_1)
    
    edi_1 = var_c_1
else
    edi_1 = ebx_1
    arg1 = 1
    var_c_1 = edi_1
    (*(*ebx_1 + 4))(ebx_1)
    esi_1 = var_c_1

int32_t eax_4 = sub_4e0070(var_8, ebx_1[2], ebx_1[3], var_c_1, 0)
int32_t* eax_5 = arg1

if ((eax_5.b & 2) != 0)
    eax_5 &= 0xfffffffd
    
    if (esi_1 != 0)
        (*(*esi_1 + 8))(esi_1)

if ((eax_5.b & 1) != 0 && edi_1 != 0)
    (*(*edi_1 + 8))(edi_1)

int32_t* esi_2 = var_8
int32_t ebx_2

if (eax_4 s< 0)
    ebx_2 = eax_4
label_4e0044:
    
    if (esi_2 != 0)
        (*(*esi_2 + 0x1c))(1)
else
    esi_2[4] = ebx_1[4]
    ebx_2 = sub_4d9950(esi_2, &data_61d250, &data_61d390, arg2)
    
    if (ebx_2 s< 0)
        goto label_4e0044

return ebx_2
