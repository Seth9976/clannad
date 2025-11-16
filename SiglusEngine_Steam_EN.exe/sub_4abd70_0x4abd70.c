// 函数: sub_4abd70
// 地址: 0x4abd70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_703054 != 0
int32_t edi = data_7030c4
data_1bfe35c = 0
data_1bfe360 = edi
data_1bfe3b0 = 0

if (not(cond:0))
    int32_t ebx = data_7030b0
    int32_t ecx = data_7030c0
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ecx)
    data_1bfe3b4 = edi
    int32_t edx_1 = data_7030b4
    data_1bfe310 = data_7030ac
    int32_t esi_1 = (eax_1 - edx) s>> 1
    int32_t eax_5 = ebx - 1 + esi_1
    data_1bfe318 = edx_1
    data_1bfe31c = eax_5
    data_1bfe32c = eax_5
    data_1bfe328 = edx_1
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(ecx + 1)
    data_1bfe358 = esi_1
    int32_t esi_2 = data_7030ac
    int32_t edx_4 = (eax_7 - edx_2) s>> 1
    data_1bfe364 = esi_2
    data_1bfe36c = data_7030b4
    int32_t eax_12 = ebx - 1 + (edx_4 << 1)
    data_1bfe320 = esi_2
    data_1bfe370 = eax_12
    data_1bfe380 = eax_12
    data_1bfe374 = esi_2
    int32_t esi_3 = data_1bfe358
    data_1bfe3ac = neg.d(edx_4)
    data_1bfe404 = neg.d(esi_3)
    int32_t ecx_3 = ebx + edx_4
    data_1bfe3b8 = data_7030ac
    int32_t esi_4 = data_7030ac
    int32_t eax_17 = esi_3 - 1 + ebx
    data_1bfe368 = ecx_3
    data_1bfe378 = ecx_3
    int32_t ecx_4 = data_7030b4
    data_1bfe3c4 = eax_17
    data_1bfe3c8 = esi_4
    data_1bfe3d4 = eax_17
    data_1bfe40c = esi_4
    int32_t eax_19 = ebx - 1 + (edx_4 << 1)
    int32_t esi_5 = data_7030b4
    data_1bfe408 = edi
    data_1bfe45c = edi
    data_1bfe37c = ecx_4
    data_1bfe3c0 = ecx_4
    data_1bfe3d0 = ecx_4
    int32_t ecx_5 = ebx + edx_4
    data_1bfe414 = esi_5
    data_1bfe424 = esi_5
    data_1bfe458 = edx_4
    int32_t edx_5 = data_7030ac
    data_1bfe314 = ebx
    data_1bfe324 = ebx
    data_1bfe3bc = ebx
    data_1bfe3cc = ebx
    data_1bfe400 = 0
    data_1bfe410 = ecx_5
    data_1bfe418 = eax_19
    data_1bfe41c = edx_5
    data_1bfe420 = ecx_5
    data_1bfe428 = eax_19
    data_1bfe454 = 0
    return eax_19

int32_t ebx_1 = data_7030ac
int32_t ecx_6 = data_7030bc
int32_t eax_21
int32_t edx_6
edx_6:eax_21 = sx.q(ecx_6)
int32_t edi_1 = data_7030b0
int32_t edx_7 = data_7030b8
data_1bfe314 = data_7030b0
int32_t esi_7 = (eax_21 - edx_6) s>> 1
int32_t eax_25 = ebx_1 - 1 + esi_7
data_1bfe31c = edx_7
data_1bfe318 = eax_25
data_1bfe328 = eax_25
data_1bfe32c = edx_7
int32_t eax_27
int32_t edx_8
edx_8:eax_27 = sx.q(ecx_6 + 1)
data_1bfe324 = edi_1
int32_t edi_2 = data_7030c4
int32_t edx_10 = (eax_27 - edx_8) s>> 1
data_1bfe368 = data_7030b0
data_1bfe3b4 = edi_2
int32_t edi_3 = data_7030b8
int32_t eax_31 = ebx_1 - 1 + (edx_10 << 1)
data_1bfe370 = edi_3
data_1bfe36c = eax_31
data_1bfe37c = eax_31
int32_t edi_4 = data_7030c4
data_1bfe380 = edi_3
data_1bfe3ac = neg.d(edx_10)
data_1bfe404 = neg.d(esi_7)
int32_t ecx_9 = ebx_1 + edx_10
data_1bfe408 = edi_4
int32_t eax_36 = ebx_1 - 1 + esi_7
data_1bfe45c = edi_4
int32_t edi_5 = data_7030b0
data_1bfe358 = esi_7
int32_t esi_8 = data_7030b8
data_1bfe364 = ecx_9
data_1bfe374 = ecx_9
int32_t ecx_10 = data_7030b0
data_1bfe3c0 = eax_36
data_1bfe3d0 = eax_36
data_1bfe410 = edi_5
int32_t eax_38 = ebx_1 - 1 + (edx_10 << 1)
data_1bfe420 = edi_5
data_1bfe378 = ecx_10
data_1bfe3bc = ecx_10
data_1bfe3c4 = esi_8
data_1bfe3cc = ecx_10
int32_t ecx_11 = ebx_1 + edx_10
data_1bfe3d4 = esi_8
data_1bfe418 = esi_8
data_1bfe428 = esi_8
data_1bfe310 = ebx_1
data_1bfe320 = ebx_1
data_1bfe3b8 = ebx_1
data_1bfe3c8 = ebx_1
data_1bfe400 = 0
data_1bfe458 = edx_10
data_1bfe40c = ecx_11
data_1bfe414 = eax_38
data_1bfe41c = ecx_11
data_1bfe424 = eax_38
data_1bfe454 = 0
return eax_38
