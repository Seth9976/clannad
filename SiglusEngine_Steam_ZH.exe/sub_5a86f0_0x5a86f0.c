// 函数: sub_5a86f0
// 地址: 0x5a86f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg2
void** pszFaceName = arg1
int32_t* eax

if (edi[5] u< 8)
    eax = edi
else
    eax = *edi

int32_t var_14 = edi[4]

if (sub_536340(arg1, arg1, pszFaceName[4], eax) == 0 && pszFaceName[6] == arg3)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

HGDIOBJ ho = pszFaceName[7]
void* eax_2 = &pszFaceName[7]
arg2 = eax_2

if (ho != 0)
    DeleteObject(ho)
    eax_2 = arg2

bool cond:0 = pszFaceName[5] u< 8
pszFaceName[4] = 0
int16_t* pszFaceName_1

if (cond:0)
    pszFaceName_1 = pszFaceName
else
    pszFaceName_1 = *pszFaceName

*pszFaceName_1 = 0
pszFaceName[6] = 0
*eax_2 = 0

if (pszFaceName != edi)
    sub_52e3c0(pszFaceName, edi, 0, 0xffffffff)

pszFaceName[6] = arg3
pszFaceName[8] = arg3 + 2
pszFaceName[9] = arg3 + 2

if (pszFaceName[5] u>= 8)
    pszFaceName = *pszFaceName

*arg2 = CreateFontW(arg3, 0, 0, 0, 0x190, 0, 0, 0, 1, 0, 0, 0, 0, pszFaceName)
HFONT eax_4
eax_4.b = 1
return eax_4
