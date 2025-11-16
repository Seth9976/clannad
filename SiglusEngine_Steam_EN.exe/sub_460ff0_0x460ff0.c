// 函数: sub_460ff0
// 地址: 0x460ff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* esi = arg1
int32_t* result = sub_460d60(arg1)
sub_4d1c30(result, arg2, esi, 0x60)
*esi = 0
esi[1] = 0

if (*(arg2 + 4) != 0)
    int32_t eax_1 = esi[3] << 5
    sub_4d6960(eax_1, &esi[1], esi, eax_1, "MSGST_MESS_COPY")
    result = esi[2] << 5
    sub_4d1c30(result, *(arg2 + 4), esi[1], result)

esi[4] = 0
esi[5] = 0
char* ecx_3 = *(arg2 + 0x14)

if (ecx_3 != 0)
    result = sub_4cfc80(ecx_3)
    int32_t* result_1 = result
    
    if (result s> 0)
        result = sub_4d6960(result, &esi[5], &esi[4], result, "MSGST_NAME_COPY")
        sub_4d1c30(result, *(arg2 + 0x14), esi[5], result_1)

esi[8] = 0
esi[7] = 0

if (*(arg2 + 0x20) != 0)
    result = sub_4d6960(result, &esi[8], &esi[7], 0x200, "MSGST_FACE_COPY")
    sub_4d1c30(result, *(arg2 + 0x20), esi[8], 0x200)

return result
