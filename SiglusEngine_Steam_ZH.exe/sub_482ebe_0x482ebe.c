// 函数: sub_482ebe
// 地址: 0x482ebe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[1]

if (eax != 0)
    _free(eax)

int32_t eax_1 = arg1[2]

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = arg1[3]

if (eax_2 != 0)
    _free(eax_2)

int32_t eax_3 = arg1[4]

if (eax_3 != 0)
    _free(eax_3)

int32_t eax_4 = arg1[5]

if (eax_4 != 0)
    _free(eax_4)

int32_t eax_5 = arg1[6]

if (eax_5 != 0)
    _free(eax_5)

int32_t eax_6 = arg1[7]

if (eax_6 != 0)
    _free(eax_6)

int32_t result = arg1[8]

if (result != 0)
    result = _free(result)

int32_t esi_1 = *arg1

if (esi_1 == 0)
    return result

return sub_4d9816(esi_1, sub_482e94)
