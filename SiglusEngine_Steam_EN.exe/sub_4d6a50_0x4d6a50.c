// 函数: sub_4d6a50
// 地址: 0x4d6a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_7027a8, 0xffffffff)
void* result = *arg3
void* const edx_1

if (result != 0)
    int32_t esi_1 = data_20c0500
    int32_t edx = 0
    int32_t* ecx = data_20c04fc
    
    if (esi_1 s> 0)
        do
            if (*ecx == result)
                result = arg4
                ecx[1] = result
                break
            
            edx += 1
            ecx = &ecx[5]
        while (edx s< esi_1)
    
    if (edx == esi_1 && data_1c04c64 == 0)
        edx_1 = &data_61cda8
        goto label_4d6abb
else if (data_1c04c64 == 0)
    edx_1 = &data_61ce14
label_4d6abb:
    sub_4cfd70(0x1c04d68, edx_1)
    result = sub_4cfd70(&data_1c04c68, "MEM_ERR")
    data_1c04c64 = 1
return result
