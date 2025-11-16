// 函数: sub_4e5ba0
// 地址: 0x4e5ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_22c
int32_t eax_1 = __security_cookie ^ &var_22c
int32_t ebx
int32_t var_230 = ebx
int32_t edi
int32_t var_238 = edi
data_1af455c = arg4
data_134cebc = arg3
data_1b1bd08 = arg5
data_1c04c54 = 0
data_1c04c5c = 0
data_1c04c50 = 0
data_1af4140 = 0x4000000
data_1c04c64 = 0
data_1af413c = 1
data_20c04f8 = 0
data_20c04fc = 0
data_20c0500 = 0
data_7027a8 = CreateSemaphoreA(nullptr, 1, 1, nullptr)
data_20c0548 = 0
CoInitialize(nullptr)
InitCommonControls()
sub_4e35f0()
sub_4d1ba0(0, 0x94, &data_1c051f0, 0)
data_1c051f0 = 0x94
GetVersionExA(&data_1c051f0)
GetModuleFileNameA(data_134cebc, &data_13517e0, 0x208)
void* eax_5 = sub_4d1610(&data_13517e0, 0x5c)

if (eax_5 == 0xffffffff)
    sub_4cfd70(&data_1af17d0, "NAMAHAM")
else
    sub_4cfdf0(eax_5, eax_5 + 0x13517e1, &data_1af17d0, 0x208)
    *(eax_5 + &data_13517e0) = 0
    int32_t eax_6 = sub_4d15d0()
    
    if (eax_6 != 0xffffffff)
        (&data_1af17d0)[eax_6] = 0

sub_4cfd70(0x1351bf0, &data_13517e0)
char* ecx = &data_1af17d0

while (true)
    char eax_7 = *ecx
    
    if (eax_7 u>= 0x80 && (eax_7 u< 0xa0 || eax_7 u> 0xdf) && eax_7 u< 0xfe)
        ecx = &ecx[2]
        continue
    
    if (eax_7 == 0)
        break
    
    if (eax_7 u>= 0x61 && eax_7 u<= 0x7a)
        *ecx = eax_7 - 0x20
    
    ecx = &ecx[1]

int32_t eax_8 = sub_4d0f10(&data_1af17d0, "REALLIVE")
int32_t eax_9

if (eax_8 != 0)
    eax_9 = sub_4d0f10(&data_1af17d0, "REALLIVEDB")

if (eax_8 == 0 || eax_9 == 0)
    sub_4cfd70(0x1bfdb18, "VisualArts_System2000_RealLive")
else
    char* var_23c_1 = &data_1af17d0
    sub_4c84d0(0x1bfdb18, "VisualArts_System2000_%s")

sub_4c5030()
sub_4cfd70(0x1352e38, &data_13517e0)
sub_4cfd70(0x1bfe038, &data_1af17d0)
GetCurrentDirectoryA(0x208, &data_13519e8)
int32_t eax_11 = sub_4c3da0(sub_4cfd70(0x1351df8, &data_13517e0), 0, "KINETICDATA", 0xffffffff)
void var_218

if (eax_11 != 2)
    if (sub_4c3da0(eax_11, 0, "REALLIVEDATA", 0xffffffff) == 2)
        sub_4cfd70(&var_218, &data_13517e0)
        void* var_23c_3 = &var_218
        sub_4c84d0(&data_13517e0, "%s\REALLIVEDATA")
else
    sub_4cfd70(&var_218, &data_13517e0)
    void* var_23c_2 = &var_218
    sub_4c84d0(&data_13517e0, "%s\KINETICDATA")

for (char* i = &data_1352000; i s< &data_1353040; i = &i[0x208])
    sub_4cfd70(i, &data_13517e0)

data_1374758 = 0
sub_4cfd70(&data_1352000, 0x1351bf0)
sub_4cfd70(0x1352c30, 0x1351bf0)
char* var_23c_4 = &data_1af17d0
sub_4c84d0(0x1b8ae60, "SoftWare\%s")
data_187c600 = 0
data_187a5c4 = 0
data_1b8a71c = 0
data_1321ec8 = 1
SYSTEMTIME systemTime
GetLocalTime(&systemTime)
uint32_t wMilliseconds = zx.d(systemTime.wMilliseconds)
data_20bfa74 = zx.d(systemTime.wHour)
uint32_t wMinute = zx.d(systemTime.wMinute)
uint32_t wSecond = zx.d(systemTime.wSecond)
data_20bfa78 = wMinute
data_20bfa7c = wSecond
data_20bfa80 = wMilliseconds
data_20bfa70 = (wMilliseconds * 2 - wMilliseconds s/ 0x21 * 0x21 + zx.d(systemTime.wHour) + wMinute
    + wSecond) * 0x1010101 + (data_20bfa70 << 0x18)
_srand(wMilliseconds)
data_1c0443c = 2
data_1c04444 = 1
void* const edx_4 = &data_6173e0
data_1b14a2c = 0
char* ecx_14 = &data_1af44a4
data_1c04440 = 0
data_1af4258 = 0x80
data_1af44c4 = 0
char eax_21

do
    eax_21 = *edx_4
    
    if (eax_21 u< 0x80)
    label_4e5f96:
        *ecx_14 = eax_21
        ecx_14 = &ecx_14[1]
        edx_4 += 1
    else
        if (eax_21 u< 0xa0)
            if (eax_21 u>= 0xfe)
                goto label_4e5f96
        else if (eax_21 u<= 0xdf || eax_21 u>= 0xfe)
            goto label_4e5f96
        
        *ecx_14 = eax_21
        ecx_14[1] = *(edx_4 + 1)
        ecx_14 = &ecx_14[2]
        edx_4 += 2
while (*edx_4 != 0)

*ecx_14 = 0
char* edx_5 = &data_1af44a4
void* ecx_15 = &data_1af4478

if (data_1af44a4 != 0)
    do
        eax_21 = *edx_5
        
        if (eax_21 u< 0x80)
        label_4e5fd7:
            *ecx_15 = eax_21
            ecx_15 += 1
            edx_5 = &edx_5[1]
        else
            if (eax_21 u< 0xa0)
                if (eax_21 u>= 0xfe)
                    goto label_4e5fd7
            else if (eax_21 u<= 0xdf || eax_21 u>= 0xfe)
                goto label_4e5fd7
            
            *ecx_15 = eax_21
            *(ecx_15 + 1) = edx_5[1]
            ecx_15 += 2
            edx_5 = &edx_5[2]
    while (*edx_5 != 0)

*ecx_15 = 0
void* edi_2 = &data_134cec0
data_1c041d0 = 0

for (void** const i_1 = &data_612000; i_1 s< &data_612090; )
    void* edx_6 = *i_1
    void* eax_22 = edi_2
    
    if (edi_2 != 0 && edx_6 != 0)
        ecx_15.b = *edx_6
        
        while (ecx_15.b != 0)
            if (ecx_15.b u< 0x80)
            label_4e6034:
                *eax_22 = ecx_15.b
                eax_22 += 1
                edx_6 += 1
            else
                if (ecx_15.b u< 0xa0)
                    if (ecx_15.b u>= 0xfe)
                        goto label_4e6034
                else if (ecx_15.b u<= 0xdf || ecx_15.b u>= 0xfe)
                    goto label_4e6034
                
                *eax_22 = ecx_15.b
                ecx_15.b = *(edx_6 + 1)
                *(eax_22 + 1) = ecx_15.b
                eax_22 += 2
                edx_6 += 2
            
            ecx_15.b = *edx_6
        
        *eax_22 = 0
    
    i_1 = &i_1[1]
    edi_2 += 0x208

uint32_t eax_23 = timeGetTime()
data_20c053c = eax_23
data_20c0538 = eax_23
int32_t eax_24 = sub_4d18c0(2)
data_131310c = modu.dp.d(0:eax_24, 0x1ffffff) - 0x1000000
data_1b8c21c = modu.dp.d(0:eax_24, 0x1ffffff) - 0x1000000
int32_t eax_26 = sub_4d18c0(2)
data_1b14a28 = 0
data_1b8a718 = 0
data_1af0a0c = 0
data_1392710 = modu.dp.d(0:eax_26, 0x1ffffff) - 0x1000000
data_1b8c218 = modu.dp.d(0:eax_26, 0x1ffffff) - 0x1000000
data_1af0a08 = 0
data_1b8c214 = 0xfa
data_187c514 = 0
data_187a5cc = 0
data_187c510 = 0
data_187a5c8 = 0
sub_58fed0()
int32_t result = sub_5901c0()
sub_5f02dd(eax_1 ^ &var_22c)
return result
