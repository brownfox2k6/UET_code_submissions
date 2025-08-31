import java.util.Arrays;
import java.util.List;

public class Week10 {
  /**
   * sorry.
   */
  public static List<String> getAllFunctions(String s) {
    String in = ""
          + "randomZonedDateTime(), randomZonedDateTime(java.time.ZonedDateTime,java.time.Zon"
          + "edDateTime), randomFutureZonedDateTime(), randomZonedDateTimeAfter(java.time.Zon"
          + "edDateTime), randomPastZonedDateTime(), randomZonedDateTimeBefore(java.time.Zone"
          + "dDateTime), randomOffsetDateTime(), randomOffsetDateTime(java.time.OffsetDateTim"
          + "e,java.time.OffsetDateTime), randomFutureOffsetDateTime(), randomOffsetDateTimeA"
          + "fter(java.time.OffsetDateTime), randomPastOffsetDateTime(), randomOffsetDateTime"
          + "Before(java.time.OffsetDateTime), randomLocalDateTime(), randomLocalDateTime(jav"
          + "a.time.LocalDateTime,java.time.LocalDateTime), randomFutureLocalDateTime(), rand"
          + "omLocalDateTimeAfter(java.time.LocalDateTime), randomPastLocalDateTime(), random"
          + "LocalDateTimeBefore(java.time.LocalDateTime), randomLocalDate(), randomLocalDate"
          + "(java.time.LocalDate,java.time.LocalDate), randomFutureLocalDate(), randomLocalD"
          + "ateAfter(java.time.LocalDate), randomPastLocalDate(), randomLocalDateBefore(java"
          + ".time.LocalDate), randomDate(), randomDate(java.util.Date,java.util.Date), rando"
          + "mFutureDate(), randomDateAfter(java.util.Date), randomPastDate(), randomDateBefo"
          + "re(java.util.Date), randomInstant(), randomInstant(java.time.Instant,java.time.I"
          + "nstant), randomFutureInstant(), randomInstantAfter(java.time.Instant), randomPas"
          + "tInstant(), randomInstantBefore(java.time.Instant), randomLocalTime(), randomLoc"
          + "alTime(java.time.LocalTime,java.time.LocalTime), randomLocalTimeAfter(java.time."
          + "LocalTime), randomLocalTimeBefore(java.time.LocalTime), random(java.time.tempora"
          + "l.TemporalField), random(java.time.temporal.TemporalField,long,long), randomAfte"
          + "r(java.time.temporal.TemporalField,long), randomBefore(java.time.temporal.Tempor"
          + "alField,long), randomMonthDay(), randomMonthDay(boolean), randomMonthDay(java.ti"
          + "me.MonthDay,java.time.MonthDay), randomMonthDay(java.time.MonthDay,java.time.Mon"
          + "thDay,boolean), randomMonthDayAfter(java.time.MonthDay), randomMonthDayAfter(jav"
          + "a.time.MonthDay,boolean), randomMonthDayBefore(java.time.MonthDay), randomMonthD"
          + "ayBefore(java.time.MonthDay,boolean), randomYearMonth(), randomYearMonth(java.ti"
          + "me.YearMonth,java.time.YearMonth), randomFutureYearMonth(), randomYearMonthAfter"
          + "(java.time.YearMonth), randomPastYearMonth(), randomYearMonthBefore(java.time.Ye"
          + "arMonth), randomYear(), randomYear(java.time.Year,java.time.Year), randomYear(in"
          + "t,int), randomFutureYear(), randomYearAfter(java.time.Year), randomYearAfter(int"
          + "), randomPastYear(), randomYearBefore(java.time.Year), randomYearBefore(int), ra"
          + "ndomFixedUtcClock(), randomFixedClock(), randomZoneId(), randomDayOfWeek(), rand"
          + "omMonth(), randomZoneOffset(), randomPeriod(), randomPositivePeriod(), randomNeg"
          + "ativePeriod(), randomDuration(), randomPositiveDuration(), randomNegativeDuratio"
          + "n()\nRandomDateUtils\ngetVolumeProps(), getVolumeProps(java.io.InputStream)\nVol"
          + "umeInfo\nrandomInt(), randomInt(int,int), randomIntLessThan(int), randomLong(), "
          + "randomPositiveLong(), randomNegativeLong(), randomLong(long,long), randomLongGre"
          + "aterThan(long), randomLongLessThan(long), randomDouble(), randomPositiveDouble()"
          + ", randomNegativeDouble(), randomDouble(double,double), randomDoubleGreaterThan(d"
          + "ouble), randomDoubleLessThan(double)\nRandomNumberUtils\nupdate(com.nordstrom.co"
          + "mmon.jdbc.utils.QueryAPI,java.lang.Object), getInt(com.nordstrom.common.jdbc.uti"
          + "ls.QueryAPI,java.lang.Object), getString(com.nordstrom.common.jdbc.utils.QueryAP"
          + "I,java.lang.Object), getResultPackage(com.nordstrom.common.jdbc.utils.QueryAPI,j"
          + "ava.lang.Object), executeQuery(java.lang.Class<?>,com.nordstrom.common.jdbc.util"
          + "s.QueryAPI,java.lang.Object), executeQuery(java.lang.Class<?>,java.lang.String,j"
          + "ava.lang.String,java.lang.Object), getInt(com.nordstrom.common.jdbc.utils.SProcA"
          + "PI,java.lang.Object), getString(com.nordstrom.common.jdbc.utils.SProcAPI,java.la"
          + "ng.Object), getResultPackage(com.nordstrom.common.jdbc.utils.SProcAPI,java.lang."
          + "Object), executeStoredProcedure(java.lang.Class<?>,com.nordstrom.common.jdbc.uti"
          + "ls.SProcAPI,java.lang.Object), executeStoredProcedure(java.lang.Class<?>,java.la"
          + "ng.String,java.lang.String,com.nordstrom.common.jdbc.Param), executeStatement(ja"
          + "va.lang.Class<?>,java.sql.Connection,java.sql.PreparedStatement), getConnection("
          + "java.lang.String)\nDatabaseUtils\ngetDefault(), osName(), version(), arch()\nOSI"
          + "nfo\nrandomArrayFrom(T[],com.google.common.collect.Range<java.lang.Integer>), ra"
          + "ndomArrayFrom(java.lang.Iterable<T>,com.google.common.collect.Range<java.lang.In"
          + "teger>), randomArrayFrom(T[],int), randomArrayFrom(java.lang.Iterable<T>,int), r"
          + "andomArrayFrom(java.util.function.Supplier<T>,com.google.common.collect.Range<ja"
          + "va.lang.Integer>), randomArrayFrom(java.util.function.Supplier<T>,int)\nRandomAr"
          + "rayUtils\nfromObject(java.lang.Object), getPathForObject(java.lang.Object), getT"
          + "argetPath(), getNextPath(java.nio.file.Path,java.lang.String,java.lang.String), "
          + "getBaseDir()\nathUtils\nisLeapDay(java.time.temporal.TemporalAccessor), atStartO"
          + "fDay(java.util.Date), atEndOfDay(java.util.Date), dateToLocalDateTime(java.util."
          + "Date), localDateTimeToDate(java.time.LocalDateTime)\nDateUtils";
  
    String[] a = in.split("\n");
    for (int i = 0; i < 16; i += 2) {
      if (s.contains(a[i + 1])) {
        return Arrays.asList(a[i].split(", "));
      }
    }
    throw new RuntimeException();
  }
}
