<?php

namespace Rector\Core\Tests\Issues\AutoImport\Fixture;

/**
 * License
 */

use Foobar\A;

/**
 * Docblock
 */
final class DemoFile
{
    public function run()
    {
        new A();
        new \Foobar\B();
    }
}

?>
-----
<?php

namespace Rector\Core\Tests\Issues\AutoImport\Fixture;

/**
 * License
 */
use Foobar\B;
use Foobar\A;

/**
 * Docblock
 */
final class DemoFile
{
    public function run()
    {
        new A();
        new B();
    }
}

?>
